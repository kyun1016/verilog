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
        <signal name="Cin" />
        <signal name="S" />
        <signal name="XLXN_6" />
        <signal name="XLXN_7" />
        <signal name="XLXN_8" />
        <signal name="XLXN_9" />
        <signal name="XLXN_12" />
        <signal name="XLXN_13" />
        <signal name="XLXN_14" />
        <signal name="XLXN_10" />
        <signal name="XLXN_11" />
        <signal name="XLXN_18" />
        <signal name="XLXN_19" />
        <signal name="Cout" />
        <port polarity="Input" name="A" />
        <port polarity="Input" name="B" />
        <port polarity="Input" name="Cin" />
        <port polarity="Output" name="S" />
        <port polarity="Output" name="Cout" />
        <blockdef name="xor2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="60" y1="-128" y2="-128" x1="0" />
            <line x2="208" y1="-96" y2="-96" x1="256" />
            <arc ex="44" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <arc ex="64" ey="-144" sx="64" sy="-48" r="56" cx="32" cy="-96" />
            <line x2="64" y1="-144" y2="-144" x1="128" />
            <line x2="64" y1="-48" y2="-48" x1="128" />
            <arc ex="128" ey="-144" sx="208" sy="-96" r="88" cx="132" cy="-56" />
            <arc ex="208" ey="-96" sx="128" sy="-48" r="88" cx="132" cy="-136" />
        </blockdef>
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
        <block symbolname="xor2" name="XLXI_1">
            <blockpin signalname="B" name="I0" />
            <blockpin signalname="A" name="I1" />
            <blockpin signalname="XLXN_7" name="O" />
        </block>
        <block symbolname="xor2" name="XLXI_2">
            <blockpin signalname="Cin" name="I0" />
            <blockpin signalname="XLXN_7" name="I1" />
            <blockpin signalname="S" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_5">
            <blockpin signalname="XLXN_7" name="I0" />
            <blockpin signalname="Cin" name="I1" />
            <blockpin signalname="XLXN_10" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_6">
            <blockpin signalname="A" name="I0" />
            <blockpin signalname="B" name="I1" />
            <blockpin signalname="XLXN_11" name="O" />
        </block>
        <block symbolname="or2" name="XLXI_7">
            <blockpin signalname="XLXN_11" name="I0" />
            <blockpin signalname="XLXN_10" name="I1" />
            <blockpin signalname="Cout" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <branch name="A">
            <wire x2="832" y1="400" y2="400" x1="720" />
            <wire x2="944" y1="400" y2="400" x1="832" />
            <wire x2="832" y1="400" y2="800" x1="832" />
            <wire x2="1248" y1="800" y2="800" x1="832" />
        </branch>
        <iomarker fontsize="28" x="720" y="400" name="A" orien="R180" />
        <branch name="B">
            <wire x2="912" y1="464" y2="464" x1="720" />
            <wire x2="944" y1="464" y2="464" x1="912" />
            <wire x2="912" y1="464" y2="736" x1="912" />
            <wire x2="1248" y1="736" y2="736" x1="912" />
        </branch>
        <iomarker fontsize="28" x="720" y="464" name="B" orien="R180" />
        <branch name="S">
            <wire x2="1664" y1="464" y2="464" x1="1648" />
            <wire x2="1872" y1="464" y2="464" x1="1664" />
        </branch>
        <instance x="944" y="528" name="XLXI_1" orien="R0" />
        <instance x="1392" y="560" name="XLXI_2" orien="R0" />
        <branch name="XLXN_7">
            <wire x2="1232" y1="432" y2="432" x1="1200" />
            <wire x2="1232" y1="432" y2="640" x1="1232" />
            <wire x2="1248" y1="640" y2="640" x1="1232" />
            <wire x2="1392" y1="432" y2="432" x1="1232" />
        </branch>
        <instance x="1248" y="704" name="XLXI_5" orien="R0" />
        <branch name="XLXN_11">
            <wire x2="1520" y1="768" y2="768" x1="1504" />
            <wire x2="1584" y1="768" y2="768" x1="1520" />
        </branch>
        <instance x="1248" y="864" name="XLXI_6" orien="R0" />
        <iomarker fontsize="28" x="720" y="576" name="Cin" orien="R180" />
        <branch name="Cin">
            <wire x2="1152" y1="576" y2="576" x1="720" />
            <wire x2="1248" y1="576" y2="576" x1="1152" />
            <wire x2="1392" y1="496" y2="496" x1="1152" />
            <wire x2="1152" y1="496" y2="576" x1="1152" />
        </branch>
        <instance x="1584" y="832" name="XLXI_7" orien="R0" />
        <branch name="Cout">
            <wire x2="1872" y1="736" y2="736" x1="1840" />
        </branch>
        <iomarker fontsize="28" x="1872" y="736" name="Cout" orien="R0" />
        <branch name="XLXN_10">
            <wire x2="1520" y1="608" y2="608" x1="1504" />
            <wire x2="1520" y1="608" y2="704" x1="1520" />
            <wire x2="1584" y1="704" y2="704" x1="1520" />
        </branch>
        <iomarker fontsize="28" x="1872" y="464" name="S" orien="R0" />
    </sheet>
</drawing>