# Introduction to Microservice, Docker, and kubernetes

# Microservice

Instead of having a Huge web app that does _everything_, you would have a **microservices** for every single service[Such as:
logging, user management and many other applicaiton]. but these into their own application those different. 

+ Communicates via _well defined APIs_ `usually HTTP`

![](architecture_image)

## Microservices - Advantages
+ **Language independent**: meaning it doesn't matter what language we use as long at it can use the `HTTP` standard.
+ **Fast Iterations** : allows to split the teams which help each _microservice_ develope on it's own pace.
+ **Small Teams** : with these small the developement of these _services_ will be easy and quick.
+ **Fault Isolation** : if a single **microservices** fails it doesn't mean that the whole _webapp_ will fail.`especially if RESTFul apis are practiced`
+ **Pairs well with containers** : you can containerize a single microservice.
+ **Scalable** : this includes **scaling up** and **scaling down**; meaning we can scale down to save money and scale up to deliver:
    + _scale down_: when we don't need many instances to be running we can use it to scale down.
    + _scale up_ : when we require more instance we can up scale them.

## Microservices - Disadvantages
+ **Complex networking**: when we have microservices upon microservices upon microservices it's hard to figure out how a single 
    request was handled and how was it handled. [since a request can go through _multi layer_ of microservices]
+ **Overhead**: there's alot of infrastructure overhead where it takes alot of infrasstructure architecture to manage, like :
    + be able to dynamically spin up databases and servers.
    + be able to containerize and be able to deploy these services on the fly.

# Docker [Container]
is an open platform for contanerizing a system, and being able to copy and apply images of your containers.
>> which helps replicate a certain image of a system from: library, dependancies and etc. 

![](docker_vs_vm)

## Dockerfile
+ Descirve the build process for an image [A definition ]
+ Can be run to automatically create an image
+ Contains all the commands necessary to build the image and run your application.

# Kubernetes [Container Orchestration]
Handles automating deployment, scaling, and management of containerized applications.

## Kubernete Vocabulary
### 1. Node
    + Kubelet
    + Communicates with master
    + Runs pod
    
### 2. Pod
    + Runs one or more containers
    + Exists/Runs on a node

### 3. Service
    + Handles requests
    + Usually a load balancer

### 4. Deployment
    + Defines desired state, while kubernete handles the rest.
        + need a copy of these intances, as an example.

![](kubernetes_diagram)

## Deployment Yaml
**Yaml** is used to handle/program the _Deployment_. **Yaml** is indentation sensetive.


# Docker commands

## ps
Is used to see what are the container that are running.
```
sudo docker ps
```

## kill
Is used to kill the running containers.
```shell
sudo docker kill process_name
```

## run
Run is used to run a built image.
```shell
sudo docker run hello-world
```
### -p
`-p` is the **port mapping flag** is used to specify a **port** to run the container on.
```shell
sudo docker run -p 3000:80 hello-world
```
the command above runs the container on port `3000` instead of port `80`

### -d
`-d` is the **detachable flag**
```shell
docker run -d -p 3001:80 hello-world
```

# using Kubernetes minikube

## boot up
We boot up **minikube** by using `minikube start`

>> minikubes runs on a **VM**

## Deployment using Yaml

insead `deployment.yml` we setup our deployment.

first we need to setup our Deployment where we will use the `hello-world` from the image `tutum/hello-world` and have `5` copies run on port
`80`
```yaml
apiVersion: extensions/v1beta1
kind: Deployment
metadata:
    name: hello-world
spec:
    replicas: 5
    template:
        labels: 
            app: hello-world
    spec:
        containers:
            - name: hello-world
              image: tutum/hello-world
              port:
                containerPort: 80
```

Second we need to declare a **Service** will target the selector(app) `hello-world`, with the service of **type** `LoadBalancer`

```yaml
kind: service
apiVersion: v1
metadata:
    name: helloworldservice
spec:
    selector:
        app: hello-world
    ports:
        - protocol: "TCP"
          # Port accessible inside the cluster
          port: 8080
          # Port to forward to inside the pod
          targetPort: 80
          # Port accessible outside the cluster
          nodePort: 30001
    type: LoadBalancer
```

now lets explore `minikube`'s commands

## get pods
```
kubectl get pods
```

## get deployments
```
kubectl get deployments
```

## dashboard
```
minikube dashboard
```

## create a new resource using our Yaml file
```
kubectl create -f ~/path/to/deployment.yml
```

## apply to already created resource
``` 
kubectl apply -f ~/path/to/deployment.yml
```

















