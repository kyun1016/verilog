<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="A" />
        <signal name="B" />
        <signal name="X" />
        <port polarity="Input" name="A" />
        <port polarity="Input" name="B" />
        <port polarity="Output" name="X" />
        <blockdef name="and2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
        </blockdef>
        <block symbolname="and2" name="XLXI_1">
            <blockpin signalname="B" name="I0" />
            <blockpin signalname="A" name="I1" />
            <blockpin signalname="X" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="448" y="480" name="XLXI_1" orien="R0" />
        <branch name="A">
            <wire x2="448" y1="352" y2="352" x1="416" />
        </branch>
        <iomarker fontsize="28" x="416" y="352" name="A" orien="R180" />
        <branch name="B">
            <wire x2="448" y1="416" y2="416" x1="416" />
        </branch>
        <iomarker fontsize="28" x="416" y="416" name="B" orien="R180" />
        <branch name="X">
            <wire x2="736" y1="384" y2="384" x1="704" />
        </branch>
        <iomarker fontsize="28" x="736" y="384" name="X" orien="R0" />
    </sheet>
</drawing>