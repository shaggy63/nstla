# nstla - NetScaler TCP log aggregator
Aggregator for TCP traffic in NetScaler log files.

The primary use of nstla to read ns.log files on your NetScaler appliance or in your support file in order to check what source IPs connect to your NetScaler, which VIP they use and what back-end server they are redirected to.

In order for your NetScaler to gather TCP stream info, you need to set it up in your log Settings first.
It is in **System > Auditiing > Change Syslog Settings**. You can set it to "ALL" for testing purposes, but it might impact your NetScaler performances as it will have to write more lines in the log files.

The software is provided as is and I nor Citrix provide any warranty on it. It might brick your system, glitch you in another dimension or god knows what.

Documentation is not yet available but will be done using Doxygen.

If you are here to troubleshoot your NetScaler, you can still take a look at the [Official NetScaler Docs](https://docs.citrix.com/en-us/netscaler.html/) that will provide you with lots of infos.

If you see that there is lots of traffic in your network, you can try sniffing the network with Wireshark in promiscuous mode from any machine, and generate a report to check what IPs cause the most traffic.

If you have any questions regarding this, you can ask here : teo@couaque.fr
