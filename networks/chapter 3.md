# Data link Layer

-   data link layer =uses=> physical layer to send/receive bits over comm. channels
-   `data link layer` **Packets** (physical layer) =encapsulate into=> **Frames**
-   Functionality :
    -   Provide service interface to the network layer
    -   deal with transmission error
    -   Regulating the flow of data
        -   so that, **slow receivers** are not swamped by **fast sender**
-   Frame multiple parts:

    -   header (holds packet)
    -   data
    -   trailer (used for error checking)

-   packet is encapsulated in a Frame which is decapsulated later
-   if the trailer is wrong the data is discarded

-   data link layer is responsable for sending a data to the destined node (it doesn't manage routing/pathing )
-   goals:

    -   reliable efficient communication between adjacent machines connected by single communication channel.
    -   group bits stream(physical layer) =into=> units called **frames**
    -   sender checksums the frame and transmits checksum with data [_trailer_]
    -   receiver re-computes the checksum and compares it with the recived value [_trailer_]
    -   perhaps return +/- acknowldgement to sender [_error or no_]
    -   `flow control` : prevent fast sender =from overwhelming=> a slower receiver.

-   Possible Services offered

    -   connectionless:

        1. Unacknowledged connectionless.
            - in all the communication channel were real-time operation is more important than quality.
            - reciever doesn't acknowledge the sender message.
        2. Acknowledged connectionless.
            - each frame is acknowledge by the receiver.[ sender knows if a frame is lost]
            - if an acknowledgement isn't sent within a fixed-time frame is resent.

    -   connection-oriented:
        1. Acknowledged connection-oriented.

-   network layer doesn't know frame-size of the packets =hence=> data link layer needs to have some mechanism to optimze the transmission.

