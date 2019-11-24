<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_1" />
        <signal name="XLXN_2" />
        <signal name="XLXN_3" />
        <signal name="Cin" />
        <signal name="A" />
        <signal name="B" />
        <signal name="S" />
        <signal name="Cout" />
        <port polarity="Input" name="Cin" />
        <port polarity="Input" name="A" />
        <port polarity="Input" name="B" />
        <port polarity="Output" name="S" />
        <port polarity="Output" name="Cout" />
        <blockdef name="my_half_adder">
            <timestamp>2019-9-14T17:11:4</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="or2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="192" ey="-96" sx="112" sy="-48" r="88" cx="116" cy="-136" />
            <arc ex="48" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <line x2="48" y1="-144" y2="-144" x1="112" />
            <arc ex="112" ey="-144" sx="192" sy="-96" r="88" cx="116" cy="-56" />
            <line x2="48" y1="-48" y2="-48" x1="112" />
        </blockdef>
        <block symbolname="my_half_adder" name="XLXI_1">
            <blockpin signalname="A" name="a" />
            <blockpin signalname="B" name="B" />
            <blockpin signalname="XLXN_1" name="S" />
            <blockpin signalname="XLXN_2" name="C" />
        </block>
        <block symbolname="my_half_adder" name="XLXI_2">
            <blockpin signalname="XLXN_1" name="a" />
            <blockpin signalname="Cin" name="B" />
            <blockpin signalname="S" name="S" />
            <blockpin signalname="XLXN_3" name="C" />
        </block>
        <block symbolname="or2" name="XLXI_3">
            <blockpin signalname="XLXN_2" name="I0" />
            <blockpin signalname="XLXN_3" name="I1" />
            <blockpin signalname="Cout" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="496" y="400" name="XLXI_1" orien="R0">
        </instance>
        <instance x="1104" y="400" name="XLXI_2" orien="R0">
        </instance>
        <branch name="XLXN_1">
            <wire x2="1104" y1="304" y2="304" x1="880" />
        </branch>
        <branch name="Cin">
            <wire x2="1088" y1="432" y2="432" x1="400" />
            <wire x2="1104" y1="368" y2="368" x1="1088" />
            <wire x2="1088" y1="368" y2="432" x1="1088" />
        </branch>
        <branch name="A">
            <wire x2="480" y1="304" y2="304" x1="384" />
            <wire x2="496" y1="304" y2="304" x1="480" />
        </branch>
        <branch name="B">
            <wire x2="480" y1="368" y2="368" x1="384" />
            <wire x2="496" y1="368" y2="368" x1="480" />
        </branch>
        <branch name="S">
            <wire x2="1504" y1="304" y2="304" x1="1488" />
            <wire x2="1616" y1="304" y2="304" x1="1504" />
        </branch>
        <branch name="Cout">
            <wire x2="1520" y1="528" y2="528" x1="1504" />
            <wire x2="1632" y1="528" y2="528" x1="1520" />
        </branch>
        <branch name="XLXN_2">
            <wire x2="896" y1="368" y2="368" x1="880" />
            <wire x2="896" y1="368" y2="560" x1="896" />
            <wire x2="1248" y1="560" y2="560" x1="896" />
        </branch>
        <branch name="XLXN_3">
            <wire x2="1504" y1="416" y2="416" x1="1168" />
            <wire x2="1168" y1="416" y2="496" x1="1168" />
            <wire x2="1248" y1="496" y2="496" x1="1168" />
            <wire x2="1504" y1="368" y2="368" x1="1488" />
            <wire x2="1504" y1="368" y2="416" x1="1504" />
        </branch>
        <instance x="1248" y="624" name="XLXI_3" orien="R0" />
        <iomarker fontsize="28" x="1616" y="304" name="S" orien="R0" />
        <iomarker fontsize="28" x="1632" y="528" name="Cout" orien="R0" />
        <iomarker fontsize="28" x="384" y="304" name="A" orien="R180" />
        <iomarker fontsize="28" x="384" y="368" name="B" orien="R180" />
        <iomarker fontsize="28" x="400" y="432" name="Cin" orien="R180" />
    </sheet>
</drawing>