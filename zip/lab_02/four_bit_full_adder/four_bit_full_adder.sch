<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="Cin" />
        <signal name="A0" />
        <signal name="B0" />
        <signal name="XLXN_153">
        </signal>
        <signal name="XLXN_155">
        </signal>
        <signal name="XLXN_158">
        </signal>
        <signal name="Sum0" />
        <signal name="Sum1" />
        <signal name="Sum2" />
        <signal name="Sum3" />
        <signal name="A1" />
        <signal name="B1" />
        <signal name="A2" />
        <signal name="B2" />
        <signal name="A3" />
        <signal name="B3" />
        <signal name="Cout" />
        <port polarity="Input" name="Cin" />
        <port polarity="Input" name="A0" />
        <port polarity="Input" name="B0" />
        <port polarity="Output" name="Sum0" />
        <port polarity="Output" name="Sum1" />
        <port polarity="Output" name="Sum2" />
        <port polarity="Output" name="Sum3" />
        <port polarity="Input" name="A1" />
        <port polarity="Input" name="B1" />
        <port polarity="Input" name="A2" />
        <port polarity="Input" name="B2" />
        <port polarity="Input" name="A3" />
        <port polarity="Input" name="B3" />
        <port polarity="Output" name="Cout" />
        <blockdef name="full_adder">
            <timestamp>2019-9-14T17:24:46</timestamp>
            <line x2="64" y1="63" y2="63" x1="64" />
            <line x2="64" y1="127" y2="127" x1="64" />
            <line x2="64" y1="191" y2="191" x1="64" />
            <line x2="320" y1="63" y2="63" x1="320" />
            <line x2="320" y1="127" y2="127" x1="320" />
            <rect width="256" x="64" y="0" height="192" />
        </blockdef>
        <block symbolname="full_adder" name="XLXI_5">
            <blockpin signalname="Cin" name="Cin" />
            <blockpin signalname="A0" name="A" />
            <blockpin signalname="B0" name="B" />
            <blockpin signalname="Sum0" name="S" />
            <blockpin signalname="XLXN_153" name="Cout" />
        </block>
        <block symbolname="full_adder" name="XLXI_6">
            <blockpin signalname="XLXN_153" name="Cin" />
            <blockpin signalname="A1" name="A" />
            <blockpin signalname="B1" name="B" />
            <blockpin signalname="Sum1" name="S" />
            <blockpin signalname="XLXN_155" name="Cout" />
        </block>
        <block symbolname="full_adder" name="XLXI_7">
            <blockpin signalname="XLXN_155" name="Cin" />
            <blockpin signalname="A2" name="A" />
            <blockpin signalname="B2" name="B" />
            <blockpin signalname="Sum2" name="S" />
            <blockpin signalname="XLXN_158" name="Cout" />
        </block>
        <block symbolname="full_adder" name="XLXI_8">
            <blockpin signalname="XLXN_158" name="Cin" />
            <blockpin signalname="A3" name="A" />
            <blockpin signalname="B3" name="B" />
            <blockpin signalname="Sum3" name="S" />
            <blockpin signalname="Cout" name="Cout" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="608" y="432" name="XLXI_5" orien="R0">
        </instance>
        <branch name="Cin">
            <wire x2="672" y1="495" y2="495" x1="640" />
        </branch>
        <iomarker fontsize="28" x="640" y="495" name="Cin" orien="R180" />
        <branch name="A0">
            <wire x2="672" y1="559" y2="559" x1="640" />
        </branch>
        <iomarker fontsize="28" x="640" y="559" name="A0" orien="R180" />
        <branch name="B0">
            <wire x2="672" y1="623" y2="623" x1="640" />
        </branch>
        <iomarker fontsize="28" x="640" y="623" name="B0" orien="R180" />
        <instance x="1136" y="496" name="XLXI_6" orien="R0">
        </instance>
        <instance x="1632" y="560" name="XLXI_7" orien="R0">
        </instance>
        <branch name="XLXN_153">
            <wire x2="1168" y1="559" y2="559" x1="928" />
            <wire x2="1200" y1="559" y2="559" x1="1168" />
        </branch>
        <branch name="XLXN_155">
            <wire x2="1664" y1="623" y2="623" x1="1456" />
            <wire x2="1696" y1="623" y2="623" x1="1664" />
        </branch>
        <instance x="2128" y="624" name="XLXI_8" orien="R0">
        </instance>
        <branch name="XLXN_158">
            <wire x2="2160" y1="687" y2="687" x1="1952" />
            <wire x2="2192" y1="687" y2="687" x1="2160" />
        </branch>
        <branch name="Sum0">
            <wire x2="960" y1="495" y2="495" x1="928" />
        </branch>
        <iomarker fontsize="28" x="960" y="495" name="Sum0" orien="R0" />
        <branch name="Sum1">
            <wire x2="1488" y1="559" y2="559" x1="1456" />
        </branch>
        <iomarker fontsize="28" x="1488" y="559" name="Sum1" orien="R0" />
        <branch name="Sum2">
            <wire x2="1984" y1="623" y2="623" x1="1952" />
        </branch>
        <iomarker fontsize="28" x="1984" y="623" name="Sum2" orien="R0" />
        <branch name="Sum3">
            <wire x2="2480" y1="687" y2="687" x1="2448" />
        </branch>
        <iomarker fontsize="28" x="2480" y="687" name="Sum3" orien="R0" />
        <branch name="A1">
            <wire x2="1200" y1="623" y2="623" x1="1168" />
        </branch>
        <iomarker fontsize="28" x="1168" y="623" name="A1" orien="R180" />
        <branch name="B1">
            <wire x2="1200" y1="687" y2="687" x1="1168" />
        </branch>
        <iomarker fontsize="28" x="1168" y="687" name="B1" orien="R180" />
        <branch name="A2">
            <wire x2="1696" y1="687" y2="687" x1="1664" />
        </branch>
        <iomarker fontsize="28" x="1664" y="687" name="A2" orien="R180" />
        <branch name="B2">
            <wire x2="1696" y1="751" y2="751" x1="1664" />
        </branch>
        <iomarker fontsize="28" x="1664" y="751" name="B2" orien="R180" />
        <branch name="A3">
            <wire x2="2192" y1="751" y2="751" x1="2160" />
        </branch>
        <iomarker fontsize="28" x="2160" y="751" name="A3" orien="R180" />
        <branch name="B3">
            <wire x2="2192" y1="815" y2="815" x1="2160" />
        </branch>
        <iomarker fontsize="28" x="2160" y="815" name="B3" orien="R180" />
        <branch name="Cout">
            <wire x2="2480" y1="751" y2="751" x1="2448" />
        </branch>
        <iomarker fontsize="28" x="2480" y="751" name="Cout" orien="R0" />
    </sheet>
</drawing>