<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="B0" />
        <signal name="A0" />
        <signal name="XLXN_4" />
        <signal name="XLXN_5" />
        <signal name="XLXN_6" />
        <signal name="XLXN_7" />
        <signal name="XLXN_8" />
        <signal name="XLXN_9" />
        <signal name="XLXN_10" />
        <signal name="XLXN_11" />
        <signal name="XLXN_12" />
        <signal name="XLXN_13" />
        <signal name="XLXN_14" />
        <signal name="XLXN_15" />
        <signal name="XLXN_17" />
        <signal name="XLXN_18" />
        <signal name="XLXN_19" />
        <port polarity="Input" name="B0" />
        <port polarity="Input" name="A0" />
        <port polarity="Input" name="XLXN_4" />
        <port polarity="Input" name="XLXN_5" />
        <port polarity="Input" name="XLXN_6" />
        <port polarity="Input" name="XLXN_7" />
        <port polarity="Input" name="XLXN_8" />
        <port polarity="Input" name="XLXN_9" />
        <port polarity="Input" name="XLXN_10" />
        <port polarity="Output" name="XLXN_11" />
        <port polarity="Output" name="XLXN_12" />
        <port polarity="Output" name="XLXN_13" />
        <port polarity="Output" name="XLXN_14" />
        <port polarity="Output" name="XLXN_15" />
        <blockdef name="full_adder">
            <timestamp>2019-9-14T18:25:28</timestamp>
            <line x2="64" y1="63" y2="63" x1="64" />
            <line x2="64" y1="127" y2="127" x1="64" />
            <line x2="64" y1="191" y2="191" x1="64" />
            <line x2="320" y1="63" y2="63" x1="320" />
            <line x2="320" y1="127" y2="127" x1="320" />
            <rect width="256" x="64" y="0" height="192" />
        </blockdef>
        <block symbolname="full_adder" name="XLXI_1">
            <blockpin name="Cin" />
            <blockpin signalname="XLXN_10" name="A" />
            <blockpin signalname="XLXN_9" name="B" />
            <blockpin signalname="XLXN_12" name="S" />
            <blockpin signalname="XLXN_11" name="Cout" />
        </block>
        <block symbolname="full_adder" name="XLXI_4">
            <blockpin signalname="XLXN_4" name="Cin" />
            <blockpin signalname="A0" name="A" />
            <blockpin signalname="B0" name="B" />
            <blockpin signalname="XLXN_15" name="S" />
            <blockpin name="Cout" />
        </block>
        <block symbolname="full_adder" name="XLXI_3">
            <blockpin name="Cin" />
            <blockpin signalname="XLXN_6" name="A" />
            <blockpin signalname="XLXN_5" name="B" />
            <blockpin signalname="XLXN_14" name="S" />
            <blockpin name="Cout" />
        </block>
        <block symbolname="full_adder" name="XLXI_2">
            <blockpin name="Cin" />
            <blockpin signalname="XLXN_8" name="A" />
            <blockpin signalname="XLXN_7" name="B" />
            <blockpin signalname="XLXN_13" name="S" />
            <blockpin name="Cout" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1360" y="512" name="XLXI_2" orien="R180">
        </instance>
        <instance x="1840" y="512" name="XLXI_3" orien="R180">
        </instance>
        <instance x="2320" y="512" name="XLXI_4" orien="R180">
        </instance>
        <instance x="880" y="512" name="XLXI_1" orien="R180">
        </instance>
        <branch name="B0">
            <wire x2="2288" y1="321" y2="321" x1="2256" />
        </branch>
        <iomarker fontsize="28" x="2288" y="321" name="B0" orien="R0" />
        <branch name="A0">
            <wire x2="2288" y1="385" y2="385" x1="2256" />
        </branch>
        <iomarker fontsize="28" x="2288" y="385" name="A0" orien="R0" />
        <branch name="XLXN_4">
            <wire x2="2288" y1="449" y2="449" x1="2256" />
        </branch>
        <iomarker fontsize="28" x="2288" y="449" name="XLXN_4" orien="R0" />
        <branch name="XLXN_5">
            <wire x2="1808" y1="321" y2="321" x1="1776" />
        </branch>
        <iomarker fontsize="28" x="1808" y="321" name="XLXN_5" orien="R0" />
        <branch name="XLXN_6">
            <wire x2="1808" y1="385" y2="385" x1="1776" />
        </branch>
        <iomarker fontsize="28" x="1808" y="385" name="XLXN_6" orien="R0" />
        <branch name="XLXN_7">
            <wire x2="1328" y1="321" y2="321" x1="1296" />
        </branch>
        <iomarker fontsize="28" x="1328" y="321" name="XLXN_7" orien="R0" />
        <branch name="XLXN_8">
            <wire x2="1328" y1="385" y2="385" x1="1296" />
        </branch>
        <iomarker fontsize="28" x="1328" y="385" name="XLXN_8" orien="R0" />
        <branch name="XLXN_9">
            <wire x2="848" y1="321" y2="321" x1="816" />
        </branch>
        <iomarker fontsize="28" x="848" y="321" name="XLXN_9" orien="R0" />
        <branch name="XLXN_10">
            <wire x2="848" y1="385" y2="385" x1="816" />
        </branch>
        <iomarker fontsize="28" x="848" y="385" name="XLXN_10" orien="R0" />
        <branch name="XLXN_11">
            <wire x2="560" y1="385" y2="385" x1="528" />
        </branch>
        <iomarker fontsize="28" x="528" y="385" name="XLXN_11" orien="R180" />
        <branch name="XLXN_12">
            <wire x2="560" y1="449" y2="449" x1="528" />
        </branch>
        <iomarker fontsize="28" x="528" y="449" name="XLXN_12" orien="R180" />
        <branch name="XLXN_13">
            <wire x2="1040" y1="449" y2="449" x1="1008" />
        </branch>
        <iomarker fontsize="28" x="1008" y="449" name="XLXN_13" orien="R180" />
        <branch name="XLXN_14">
            <wire x2="1520" y1="449" y2="449" x1="1488" />
        </branch>
        <iomarker fontsize="28" x="1488" y="449" name="XLXN_14" orien="R180" />
        <branch name="XLXN_15">
            <wire x2="2000" y1="449" y2="449" x1="1968" />
        </branch>
        <iomarker fontsize="28" x="1968" y="449" name="XLXN_15" orien="R180" />
        <branch name="XLXN_17">
            <wire x2="1792" y1="448" y2="448" x1="1776" />
            <wire x2="1792" y1="448" y2="560" x1="1792" />
            <wire x2="1984" y1="560" y2="560" x1="1792" />
            <wire x2="1984" y1="384" y2="560" x1="1984" />
            <wire x2="2000" y1="384" y2="384" x1="1984" />
        </branch>
        <branch name="XLXN_18">
            <wire x2="1312" y1="448" y2="448" x1="1296" />
            <wire x2="1312" y1="448" y2="560" x1="1312" />
            <wire x2="1504" y1="560" y2="560" x1="1312" />
            <wire x2="1504" y1="384" y2="560" x1="1504" />
            <wire x2="1520" y1="384" y2="384" x1="1504" />
        </branch>
        <branch name="XLXN_19">
            <wire x2="832" y1="448" y2="448" x1="816" />
            <wire x2="832" y1="448" y2="560" x1="832" />
            <wire x2="1024" y1="560" y2="560" x1="832" />
            <wire x2="1024" y1="384" y2="560" x1="1024" />
            <wire x2="1040" y1="384" y2="384" x1="1024" />
        </branch>
    </sheet>
</drawing>