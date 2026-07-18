FUN_0054edf0:
0054EDF0  55                        PUSH EBP
0054EDF1  8B EC                     MOV EBP,ESP
0054EDF3  53                        PUSH EBX
0054EDF4  56                        PUSH ESI
0054EDF5  8B F1                     MOV ESI,ECX
0054EDF7  33 C0                     XOR EAX,EAX
0054EDF9  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0054EDFF  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0054EE02  8A C1                     MOV AL,CL
0054EE04  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0054EE07  8A 94 C0 C7 87 80 00      MOV DL,byte ptr [EAX + EAX*0x8 + 0x8087c7]
0054EE0E  84 D2                     TEST DL,DL
0054EE10  75 09                     JNZ 0x0054ee1b
0054EE12  A0 4F 87 80 00            MOV AL,[0x0080874f]
0054EE17  84 C0                     TEST AL,AL
0054EE19  74 05                     JZ 0x0054ee20
LAB_0054ee1b:
0054EE1B  80 FB 05                  CMP BL,0x5
0054EE1E  75 7C                     JNZ 0x0054ee9c
LAB_0054ee20:
0054EE20  A1 A5 87 80 00            MOV EAX,[0x008087a5]
0054EE25  85 C0                     TEST EAX,EAX
0054EE27  75 73                     JNZ 0x0054ee9c
0054EE29  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0054EE2C  85 C0                     TEST EAX,EAX
0054EE2E  74 1D                     JZ 0x0054ee4d
0054EE30  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0054EE33  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0054EE36  6A 00                     PUSH 0x0
0054EE38  6A 00                     PUSH 0x0
0054EE3A  50                        PUSH EAX
0054EE3B  52                        PUSH EDX
0054EE3C  53                        PUSH EBX
0054EE3D  6A 00                     PUSH 0x0
0054EE3F  51                        PUSH ECX
0054EE40  8B CE                     MOV ECX,ESI
0054EE42  E8 E6 53 EB FF            CALL 0x0040422d
0054EE47  5E                        POP ESI
0054EE48  5B                        POP EBX
0054EE49  5D                        POP EBP
0054EE4A  C2 10 00                  RET 0x10
LAB_0054ee4d:
0054EE4D  8D 45 10                  LEA EAX,[EBP + 0x10]
0054EE50  8D 4D 08                  LEA ECX,[EBP + 0x8]
0054EE53  50                        PUSH EAX
0054EE54  51                        PUSH ECX
0054EE55  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0054EE5B  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
0054EE62  E8 98 31 EB FF            CALL 0x00401fff
0054EE67  83 F8 FF                  CMP EAX,-0x1
0054EE6A  74 20                     JZ 0x0054ee8c
0054EE6C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0054EE6F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0054EE72  52                        PUSH EDX
0054EE73  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0054EE76  51                        PUSH ECX
0054EE77  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0054EE7A  52                        PUSH EDX
0054EE7B  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
0054EE81  51                        PUSH ECX
0054EE82  53                        PUSH EBX
0054EE83  50                        PUSH EAX
0054EE84  52                        PUSH EDX
0054EE85  8B CE                     MOV ECX,ESI
0054EE87  E8 A1 53 EB FF            CALL 0x0040422d
LAB_0054ee8c:
0054EE8C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054EE8F  85 C0                     TEST EAX,EAX
0054EE91  74 09                     JZ 0x0054ee9c
0054EE93  8D 45 08                  LEA EAX,[EBP + 0x8]
0054EE96  50                        PUSH EAX
0054EE97  E8 C4 C1 15 00            CALL 0x006ab060
LAB_0054ee9c:
0054EE9C  5E                        POP ESI
0054EE9D  5B                        POP EBX
0054EE9E  5D                        POP EBP
0054EE9F  C2 10 00                  RET 0x10
