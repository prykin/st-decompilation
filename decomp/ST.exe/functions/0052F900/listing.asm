OptPanelTy::ShiftControls:
0052F900  55                        PUSH EBP
0052F901  8B EC                     MOV EBP,ESP
0052F903  83 EC 48                  SUB ESP,0x48
0052F906  8B D1                     MOV EDX,ECX
0052F908  53                        PUSH EBX
0052F909  56                        PUSH ESI
0052F90A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0052F90D  8B 42 5C                  MOV EAX,dword ptr [EDX + 0x5c]
0052F910  57                        PUSH EDI
0052F911  3B F0                     CMP ESI,EAX
0052F913  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0052F916  0F 84 4B 01 00 00         JZ 0x0052fa67
0052F91C  B9 08 00 00 00            MOV ECX,0x8
0052F921  33 C0                     XOR EAX,EAX
0052F923  8D 7A 18                  LEA EDI,[EDX + 0x18]
0052F926  89 72 5C                  MOV dword ptr [EDX + 0x5c],ESI
0052F929  F3 AB                     STOSD.REP ES:EDI
0052F92B  8B 82 74 01 00 00         MOV EAX,dword ptr [EDX + 0x174]
0052F931  C7 42 28 24 00 00 00      MOV dword ptr [EDX + 0x28],0x24
0052F938  85 F6                     TEST ESI,ESI
0052F93A  75 02                     JNZ 0x0052f93e
0052F93C  F7 D8                     NEG EAX
LAB_0052f93e:
0052F93E  66 89 42 2E               MOV word ptr [EDX + 0x2e],AX
0052F942  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052F947  8D 55 BC                  LEA EDX,[EBP + -0x44]
0052F94A  8D 4D B8                  LEA ECX,[EBP + -0x48]
0052F94D  6A 00                     PUSH 0x0
0052F94F  52                        PUSH EDX
0052F950  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0052F953  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052F959  E8 92 DE 1F 00            CALL 0x0072d7f0
0052F95E  8B F0                     MOV ESI,EAX
0052F960  83 C4 08                  ADD ESP,0x8
0052F963  85 F6                     TEST ESI,ESI
0052F965  0F 85 BE 00 00 00         JNZ 0x0052fa29
0052F96B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0052F96E  BB 0A 00 00 00            MOV EBX,0xa
0052F973  8D BE B5 01 00 00         LEA EDI,[ESI + 0x1b5]
LAB_0052f979:
0052F979  8B 07                     MOV EAX,dword ptr [EDI]
0052F97B  85 C0                     TEST EAX,EAX
0052F97D  74 0E                     JZ 0x0052f98d
0052F97F  8D 4E 18                  LEA ECX,[ESI + 0x18]
0052F982  51                        PUSH ECX
0052F983  50                        PUSH EAX
0052F984  6A 02                     PUSH 0x2
0052F986  8B CE                     MOV ECX,ESI
0052F988  E8 F3 66 1B 00            CALL 0x006e6080
LAB_0052f98d:
0052F98D  83 C7 04                  ADD EDI,0x4
0052F990  4B                        DEC EBX
0052F991  75 E6                     JNZ 0x0052f979
0052F993  8D BE AD 01 00 00         LEA EDI,[ESI + 0x1ad]
0052F999  BB 02 00 00 00            MOV EBX,0x2
LAB_0052f99e:
0052F99E  8B 07                     MOV EAX,dword ptr [EDI]
0052F9A0  85 C0                     TEST EAX,EAX
0052F9A2  74 0E                     JZ 0x0052f9b2
0052F9A4  8D 56 18                  LEA EDX,[ESI + 0x18]
0052F9A7  8B CE                     MOV ECX,ESI
0052F9A9  52                        PUSH EDX
0052F9AA  50                        PUSH EAX
0052F9AB  6A 02                     PUSH 0x2
0052F9AD  E8 CE 66 1B 00            CALL 0x006e6080
LAB_0052f9b2:
0052F9B2  83 C7 04                  ADD EDI,0x4
0052F9B5  4B                        DEC EBX
0052F9B6  75 E6                     JNZ 0x0052f99e
0052F9B8  33 C0                     XOR EAX,EAX
0052F9BA  8A 86 A4 01 00 00         MOV AL,byte ptr [ESI + 0x1a4]
0052F9C0  83 C0 FD                  ADD EAX,-0x3
0052F9C3  83 F8 0B                  CMP EAX,0xb
0052F9C6  77 4F                     JA 0x0052fa17
0052F9C8  33 C9                     XOR ECX,ECX
0052F9CA  8A 88 78 FA 52 00         MOV CL,byte ptr [EAX + 0x52fa78]
switchD_0052f9d0::switchD:
0052F9D0  FF 24 8D 70 FA 52 00      JMP dword ptr [ECX*0x4 + 0x52fa70]
switchD_0052f9d0::caseD_3:
0052F9D7  8D 56 18                  LEA EDX,[ESI + 0x18]
0052F9DA  B9 08 00 00 00            MOV ECX,0x8
0052F9DF  33 C0                     XOR EAX,EAX
0052F9E1  8B FA                     MOV EDI,EDX
0052F9E3  F3 AB                     STOSD.REP ES:EDI
0052F9E5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052F9E8  85 C0                     TEST EAX,EAX
0052F9EA  74 0E                     JZ 0x0052f9fa
0052F9EC  A0 4C 73 80 00            MOV AL,[0x0080734c]
0052F9F1  84 C0                     TEST AL,AL
0052F9F3  B8 55 00 00 00            MOV EAX,0x55
0052F9F8  75 05                     JNZ 0x0052f9ff
LAB_0052f9fa:
0052F9FA  B8 56 00 00 00            MOV EAX,0x56
LAB_0052f9ff:
0052F9FF  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
0052FA02  8B 86 B5 01 00 00         MOV EAX,dword ptr [ESI + 0x1b5]
0052FA08  85 C0                     TEST EAX,EAX
0052FA0A  74 0B                     JZ 0x0052fa17
0052FA0C  52                        PUSH EDX
0052FA0D  50                        PUSH EAX
0052FA0E  6A 02                     PUSH 0x2
0052FA10  8B CE                     MOV ECX,ESI
0052FA12  E8 69 66 1B 00            CALL 0x006e6080
switchD_0052f9d0::caseD_5:
0052FA17  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0052FA1A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0052FA20  5F                        POP EDI
0052FA21  5E                        POP ESI
0052FA22  5B                        POP EBX
0052FA23  8B E5                     MOV ESP,EBP
0052FA25  5D                        POP EBP
0052FA26  C2 04 00                  RET 0x4
LAB_0052fa29:
0052FA29  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0052FA2C  68 24 72 7C 00            PUSH 0x7c7224
0052FA31  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052FA36  56                        PUSH ESI
0052FA37  6A 00                     PUSH 0x0
0052FA39  68 56 01 00 00            PUSH 0x156
0052FA3E  68 A0 70 7C 00            PUSH 0x7c70a0
0052FA43  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052FA48  E8 83 DA 17 00            CALL 0x006ad4d0
0052FA4D  83 C4 18                  ADD ESP,0x18
0052FA50  85 C0                     TEST EAX,EAX
0052FA52  74 01                     JZ 0x0052fa55
0052FA54  CC                        INT3
LAB_0052fa55:
0052FA55  68 56 01 00 00            PUSH 0x156
0052FA5A  68 A0 70 7C 00            PUSH 0x7c70a0
0052FA5F  6A 00                     PUSH 0x0
0052FA61  56                        PUSH ESI
0052FA62  E8 D9 63 17 00            CALL 0x006a5e40
LAB_0052fa67:
0052FA67  5F                        POP EDI
0052FA68  5E                        POP ESI
0052FA69  5B                        POP EBX
0052FA6A  8B E5                     MOV ESP,EBP
0052FA6C  5D                        POP EBP
0052FA6D  C2 04 00                  RET 0x4
