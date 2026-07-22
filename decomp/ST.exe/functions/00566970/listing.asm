SoundManagerTy::sub_00566970:
00566970  55                        PUSH EBP
00566971  8B EC                     MOV EBP,ESP
00566973  56                        PUSH ESI
00566974  8B F1                     MOV ESI,ECX
00566976  57                        PUSH EDI
00566977  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0056697A  85 C0                     TEST EAX,EAX
0056697C  0F 84 C5 00 00 00         JZ 0x00566a47
00566982  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
00566985  85 C0                     TEST EAX,EAX
00566987  0F 84 BA 00 00 00         JZ 0x00566a47
0056698D  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00566990  85 FF                     TEST EDI,EDI
00566992  0F 8C AF 00 00 00         JL 0x00566a47
00566998  33 C9                     XOR ECX,ECX
0056699A  8A 4E 38                  MOV CL,byte ptr [ESI + 0x38]
0056699D  83 F9 03                  CMP ECX,0x3
005669A0  0F 87 A1 00 00 00         JA 0x00566a47
switchD_005669a6::switchD:
005669A6  FF 24 8D 50 6A 56 00      JMP dword ptr [ECX*0x4 + 0x566a50]
switchD_005669a6::caseD_0:
005669AD  3B 7E 2C                  CMP EDI,dword ptr [ESI + 0x2c]
005669B0  0F 8D 91 00 00 00         JGE 0x00566a47
005669B6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005669B9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005669BC  6A 00                     PUSH 0x0
005669BE  51                        PUSH ECX
005669BF  8B 0D 14 B0 79 00         MOV ECX,dword ptr [0x0079b014]
005669C5  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005669C8  8D 04 97                  LEA EAX,[EDI + EDX*0x4]
005669CB  50                        PUSH EAX
005669CC  6A 03                     PUSH 0x3
005669CE  EB 3C                     JMP 0x00566a0c
switchD_005669a6::caseD_2:
005669D0  3B 7E 30                  CMP EDI,dword ptr [ESI + 0x30]
005669D3  7D 72                     JGE 0x00566a47
005669D5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005669D8  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005669DB  6A 00                     PUSH 0x0
005669DD  51                        PUSH ECX
005669DE  8B 0D 18 B0 79 00         MOV ECX,dword ptr [0x0079b018]
005669E4  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005669E7  8D 04 97                  LEA EAX,[EDI + EDX*0x4]
005669EA  50                        PUSH EAX
005669EB  6A 03                     PUSH 0x3
005669ED  EB 1D                     JMP 0x00566a0c
switchD_005669a6::caseD_3:
005669EF  3B 7E 34                  CMP EDI,dword ptr [ESI + 0x34]
005669F2  7D 53                     JGE 0x00566a47
005669F4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005669F7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005669FA  6A 00                     PUSH 0x0
005669FC  51                        PUSH ECX
005669FD  8B 0D 1C B0 79 00         MOV ECX,dword ptr [0x0079b01c]
00566A03  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00566A06  8D 04 97                  LEA EAX,[EDI + EDX*0x4]
00566A09  50                        PUSH EAX
00566A0A  6A 03                     PUSH 0x3
LAB_00566a0c:
00566A0C  51                        PUSH ECX
00566A0D  E8 EE C1 18 00            CALL 0x006f2c00
00566A12  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00566A15  83 C4 0C                  ADD ESP,0xc
00566A18  B9 58 76 80 00            MOV ECX,0x807658
00566A1D  50                        PUSH EAX
00566A1E  52                        PUSH EDX
00566A1F  E8 C2 A6 E9 FF            CALL 0x004010e6
00566A24  85 C0                     TEST EAX,EAX
00566A26  75 1F                     JNZ 0x00566a47
00566A28  39 7E 39                  CMP dword ptr [ESI + 0x39],EDI
00566A2B  75 10                     JNZ 0x00566a3d
00566A2D  8B 46 3D                  MOV EAX,dword ptr [ESI + 0x3d]
00566A30  89 7E 39                  MOV dword ptr [ESI + 0x39],EDI
00566A33  40                        INC EAX
00566A34  5F                        POP EDI
00566A35  89 46 3D                  MOV dword ptr [ESI + 0x3d],EAX
00566A38  5E                        POP ESI
00566A39  5D                        POP EBP
00566A3A  C2 08 00                  RET 0x8
LAB_00566a3d:
00566A3D  C7 46 3D 01 00 00 00      MOV dword ptr [ESI + 0x3d],0x1
00566A44  89 7E 39                  MOV dword ptr [ESI + 0x39],EDI
switchD_005669a6::default:
00566A47  5F                        POP EDI
00566A48  5E                        POP ESI
00566A49  5D                        POP EBP
00566A4A  C2 08 00                  RET 0x8
