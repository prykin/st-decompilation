FUN_0062f6c0:
0062F6C0  55                        PUSH EBP
0062F6C1  8B EC                     MOV EBP,ESP
0062F6C3  53                        PUSH EBX
0062F6C4  57                        PUSH EDI
0062F6C5  8B F9                     MOV EDI,ECX
0062F6C7  33 DB                     XOR EBX,EBX
0062F6C9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062F6CC  85 C9                     TEST ECX,ECX
0062F6CE  0F 8C 90 00 00 00         JL 0x0062f764
0062F6D4  83 F9 05                  CMP ECX,0x5
0062F6D7  0F 8D 87 00 00 00         JGE 0x0062f764
0062F6DD  8B 84 8F E5 01 00 00      MOV EAX,dword ptr [EDI + ECX*0x4 + 0x1e5]
0062F6E4  56                        PUSH ESI
0062F6E5  8D B4 8F E5 01 00 00      LEA ESI,[EDI + ECX*0x4 + 0x1e5]
0062F6EC  85 C0                     TEST EAX,EAX
0062F6EE  74 57                     JZ 0x0062f747
0062F6F0  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0062F6F3  83 F8 03                  CMP EAX,0x3
0062F6F6  74 05                     JZ 0x0062f6fd
0062F6F8  83 F8 06                  CMP EAX,0x6
0062F6FB  75 0A                     JNZ 0x0062f707
LAB_0062f6fd:
0062F6FD  6A 00                     PUSH 0x0
0062F6FF  51                        PUSH ECX
0062F700  8B CF                     MOV ECX,EDI
0062F702  E8 C2 59 DD FF            CALL 0x004050c9
LAB_0062f707:
0062F707  8B 06                     MOV EAX,dword ptr [ESI]
0062F709  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
0062F70C  85 DB                     TEST EBX,EBX
0062F70E  74 19                     JZ 0x0062f729
0062F710  8B CB                     MOV ECX,EBX
0062F712  E8 BE 2A DD FF            CALL 0x004021d5
0062F717  53                        PUSH EBX
0062F718  E8 93 EB 0F 00            CALL 0x0072e2b0
0062F71D  8B 0E                     MOV ECX,dword ptr [ESI]
0062F71F  83 C4 04                  ADD ESP,0x4
0062F722  C7 41 10 00 00 00 00      MOV dword ptr [ECX + 0x10],0x0
LAB_0062f729:
0062F729  8B 8F E1 01 00 00         MOV ECX,dword ptr [EDI + 0x1e1]
0062F72F  56                        PUSH ESI
0062F730  49                        DEC ECX
0062F731  BB 01 00 00 00            MOV EBX,0x1
0062F736  89 8F E1 01 00 00         MOV dword ptr [EDI + 0x1e1],ECX
0062F73C  E8 1F B9 07 00            CALL 0x006ab060
0062F741  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_0062f747:
0062F747  8B 87 E1 01 00 00         MOV EAX,dword ptr [EDI + 0x1e1]
0062F74D  5E                        POP ESI
0062F74E  85 C0                     TEST EAX,EAX
0062F750  75 0A                     JNZ 0x0062f75c
0062F752  C7 87 FA 01 00 00 02 00 00 00  MOV dword ptr [EDI + 0x1fa],0x2
LAB_0062f75c:
0062F75C  8B C3                     MOV EAX,EBX
0062F75E  5F                        POP EDI
0062F75F  5B                        POP EBX
0062F760  5D                        POP EBP
0062F761  C2 04 00                  RET 0x4
LAB_0062f764:
0062F764  5F                        POP EDI
0062F765  33 C0                     XOR EAX,EAX
0062F767  5B                        POP EBX
0062F768  5D                        POP EBP
0062F769  C2 04 00                  RET 0x4
