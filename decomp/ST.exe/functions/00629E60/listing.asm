STParticleC::sub_00629E60:
00629E60  55                        PUSH EBP
00629E61  8B EC                     MOV EBP,ESP
00629E63  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00629E66  56                        PUSH ESI
00629E67  57                        PUSH EDI
00629E68  83 CF FF                  OR EDI,0xffffffff
00629E6B  85 C0                     TEST EAX,EAX
00629E6D  8B F1                     MOV ESI,ECX
00629E6F  74 0F                     JZ 0x00629e80
00629E71  C6 46 40 01               MOV byte ptr [ESI + 0x40],0x1
00629E75  E8 5A 75 DD FF            CALL 0x004013d4
00629E7A  88 86 D6 00 00 00         MOV byte ptr [ESI + 0xd6],AL
LAB_00629e80:
00629E80  8A 86 D6 00 00 00         MOV AL,byte ptr [ESI + 0xd6]
00629E86  84 C0                     TEST AL,AL
00629E88  74 45                     JZ 0x00629ecf
00629E8A  8B 86 C2 00 00 00         MOV EAX,dword ptr [ESI + 0xc2]
00629E90  48                        DEC EAX
00629E91  83 F8 03                  CMP EAX,0x3
00629E94  77 39                     JA 0x00629ecf
switchD_00629e96::switchD:
00629E96  FF 24 85 D8 9E 62 00      JMP dword ptr [EAX*0x4 + 0x629ed8]
switchD_00629e96::caseD_1:
00629E9D  6A 01                     PUSH 0x1
00629E9F  8B CE                     MOV ECX,ESI
00629EA1  E8 81 B8 DD FF            CALL 0x00405727
00629EA6  EB 1A                     JMP 0x00629ec2
switchD_00629e96::caseD_3:
00629EA8  8B 86 EB 00 00 00         MOV EAX,dword ptr [ESI + 0xeb]
00629EAE  85 C0                     TEST EAX,EAX
00629EB0  74 07                     JZ 0x00629eb9
00629EB2  8B CE                     MOV ECX,ESI
00629EB4  E8 C1 AB DD FF            CALL 0x00404a7a
LAB_00629eb9:
00629EB9  6A 01                     PUSH 0x1
00629EBB  8B CE                     MOV ECX,ESI
00629EBD  E8 91 BE DD FF            CALL 0x00405d53
LAB_00629ec2:
00629EC2  8B F8                     MOV EDI,EAX
00629EC4  85 FF                     TEST EDI,EDI
00629EC6  7C 07                     JL 0x00629ecf
00629EC8  C6 86 D6 00 00 00 01      MOV byte ptr [ESI + 0xd6],0x1
switchD_00629e96::default:
00629ECF  8B C7                     MOV EAX,EDI
00629ED1  5F                        POP EDI
00629ED2  5E                        POP ESI
00629ED3  5D                        POP EBP
00629ED4  C2 04 00                  RET 0x4
