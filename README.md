# nstla - NetScaler TCP log aggregator
Aggregator for TCP traffic in NetScaler log files.

The primary use of nstla to read ns.log files on your NetScaler appliance or in your support file in order to check what source IPs connect to your NetScaler, which VIP they use and what back-end server they are redirected to.

In order for your NetScaler to gather TCP stream info, you need to set it up in your log Settings first.
It is in **System > Auditiing > Change Syslog Settings**. You can set it to "ALL" for testing purposes, but it might impact your NetScaler performances as it will have to write more lines in the log files.

The software is provided as is and I nor Citrix provide any warranty on it. It might brick your system, glitch you in another dimension or god knows what.
