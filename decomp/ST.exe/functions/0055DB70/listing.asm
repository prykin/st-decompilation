FUN_0055db70:
0055DB70  55                        PUSH EBP
0055DB71  8B EC                     MOV EBP,ESP
0055DB73  A1 A4 32 80 00            MOV EAX,[0x008032a4]
0055DB78  56                        PUSH ESI
0055DB79  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0055DB7C  85 C0                     TEST EAX,EAX
0055DB7E  74 0C                     JZ 0x0055db8c
0055DB80  68 A4 32 80 00            PUSH 0x8032a4
0055DB85  8B CE                     MOV ECX,ESI
0055DB87  E8 54 45 19 00            CALL 0x006f20e0
LAB_0055db8c:
0055DB8C  A1 A8 32 80 00            MOV EAX,[0x008032a8]
0055DB91  85 C0                     TEST EAX,EAX
0055DB93  74 0C                     JZ 0x0055dba1
0055DB95  68 A8 32 80 00            PUSH 0x8032a8
0055DB9A  8B CE                     MOV ECX,ESI
0055DB9C  E8 3F 45 19 00            CALL 0x006f20e0
LAB_0055dba1:
0055DBA1  A1 AC 32 80 00            MOV EAX,[0x008032ac]
0055DBA6  85 C0                     TEST EAX,EAX
0055DBA8  74 0C                     JZ 0x0055dbb6
0055DBAA  68 AC 32 80 00            PUSH 0x8032ac
0055DBAF  8B CE                     MOV ECX,ESI
0055DBB1  E8 2A 45 19 00            CALL 0x006f20e0
LAB_0055dbb6:
0055DBB6  A1 B0 32 80 00            MOV EAX,[0x008032b0]
0055DBBB  85 C0                     TEST EAX,EAX
0055DBBD  74 0C                     JZ 0x0055dbcb
0055DBBF  68 B0 32 80 00            PUSH 0x8032b0
0055DBC4  8B CE                     MOV ECX,ESI
0055DBC6  E8 15 45 19 00            CALL 0x006f20e0
LAB_0055dbcb:
0055DBCB  5E                        POP ESI
0055DBCC  5D                        POP EBP
0055DBCD  C3                        RET
