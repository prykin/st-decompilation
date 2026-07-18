FUN_0069fd70:
0069FD70  55                        PUSH EBP
0069FD71  8B EC                     MOV EBP,ESP
0069FD73  81 EC C8 00 00 00         SUB ESP,0xc8
0069FD79  53                        PUSH EBX
0069FD7A  57                        PUSH EDI
0069FD7B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0069FD7E  33 DB                     XOR EBX,EBX
0069FD80  85 FF                     TEST EDI,EDI
0069FD82  0F 84 89 01 00 00         JZ 0x0069ff11
0069FD88  56                        PUSH ESI
0069FD89  68 98 1D 7D 00            PUSH 0x7d1d98
0069FD8E  68 3C 86 7D 00            PUSH 0x7d863c
0069FD93  E8 D8 EC 08 00            CALL 0x0072ea70
0069FD98  8B F0                     MOV ESI,EAX
0069FD9A  83 C4 08                  ADD ESP,0x8
0069FD9D  85 F6                     TEST ESI,ESI
0069FD9F  0F 84 63 01 00 00         JZ 0x0069ff08
0069FDA5  8D 45 08                  LEA EAX,[EBP + 0x8]
0069FDA8  50                        PUSH EAX
0069FDA9  68 88 1D 7D 00            PUSH 0x7d1d88
0069FDAE  56                        PUSH ESI
0069FDAF  E8 9C 02 09 00            CALL 0x00730050
0069FDB4  83 C4 0C                  ADD ESP,0xc
0069FDB7  85 C0                     TEST EAX,EAX
0069FDB9  0F 8E 40 01 00 00         JLE 0x0069feff
0069FDBF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069FDC2  56                        PUSH ESI
0069FDC3  8D 95 38 FF FF FF         LEA EDX,[EBP + 0xffffff38]
0069FDC9  68 C8 00 00 00            PUSH 0xc8
0069FDCE  52                        PUSH EDX
0069FDCF  89 4F 04                  MOV dword ptr [EDI + 0x4],ECX
0069FDD2  E8 39 0D 09 00            CALL 0x00730b10
0069FDD7  8D 45 08                  LEA EAX,[EBP + 0x8]
0069FDDA  50                        PUSH EAX
0069FDDB  68 88 1D 7D 00            PUSH 0x7d1d88
0069FDE0  56                        PUSH ESI
0069FDE1  E8 6A 02 09 00            CALL 0x00730050
0069FDE6  83 C4 18                  ADD ESP,0x18
0069FDE9  85 C0                     TEST EAX,EAX
0069FDEB  0F 8E 0E 01 00 00         JLE 0x0069feff
0069FDF1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069FDF4  56                        PUSH ESI
0069FDF5  8D 95 38 FF FF FF         LEA EDX,[EBP + 0xffffff38]
0069FDFB  68 C8 00 00 00            PUSH 0xc8
0069FE00  52                        PUSH EDX
0069FE01  89 4F 08                  MOV dword ptr [EDI + 0x8],ECX
0069FE04  E8 07 0D 09 00            CALL 0x00730b10
0069FE09  8D 45 08                  LEA EAX,[EBP + 0x8]
0069FE0C  50                        PUSH EAX
0069FE0D  68 88 1D 7D 00            PUSH 0x7d1d88
0069FE12  56                        PUSH ESI
0069FE13  E8 38 02 09 00            CALL 0x00730050
0069FE18  83 C4 18                  ADD ESP,0x18
0069FE1B  85 C0                     TEST EAX,EAX
0069FE1D  0F 8E DC 00 00 00         JLE 0x0069feff
0069FE23  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069FE26  56                        PUSH ESI
0069FE27  8D 95 38 FF FF FF         LEA EDX,[EBP + 0xffffff38]
0069FE2D  68 C8 00 00 00            PUSH 0xc8
0069FE32  52                        PUSH EDX
0069FE33  89 4F 14                  MOV dword ptr [EDI + 0x14],ECX
0069FE36  E8 D5 0C 09 00            CALL 0x00730b10
0069FE3B  8D 45 08                  LEA EAX,[EBP + 0x8]
0069FE3E  50                        PUSH EAX
0069FE3F  68 88 1D 7D 00            PUSH 0x7d1d88
0069FE44  56                        PUSH ESI
0069FE45  E8 06 02 09 00            CALL 0x00730050
0069FE4A  83 C4 18                  ADD ESP,0x18
0069FE4D  85 C0                     TEST EAX,EAX
0069FE4F  0F 8E AA 00 00 00         JLE 0x0069feff
0069FE55  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069FE58  56                        PUSH ESI
0069FE59  8D 95 38 FF FF FF         LEA EDX,[EBP + 0xffffff38]
0069FE5F  68 C8 00 00 00            PUSH 0xc8
0069FE64  52                        PUSH EDX
0069FE65  89 4F 0C                  MOV dword ptr [EDI + 0xc],ECX
0069FE68  E8 A3 0C 09 00            CALL 0x00730b10
0069FE6D  8D 45 08                  LEA EAX,[EBP + 0x8]
0069FE70  50                        PUSH EAX
0069FE71  68 88 1D 7D 00            PUSH 0x7d1d88
0069FE76  56                        PUSH ESI
0069FE77  E8 D4 01 09 00            CALL 0x00730050
0069FE7C  83 C4 18                  ADD ESP,0x18
0069FE7F  85 C0                     TEST EAX,EAX
0069FE81  7E 7C                     JLE 0x0069feff
0069FE83  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069FE86  56                        PUSH ESI
0069FE87  8D 95 38 FF FF FF         LEA EDX,[EBP + 0xffffff38]
0069FE8D  68 C8 00 00 00            PUSH 0xc8
0069FE92  52                        PUSH EDX
0069FE93  89 4F 18                  MOV dword ptr [EDI + 0x18],ECX
0069FE96  E8 75 0C 09 00            CALL 0x00730b10
0069FE9B  8D 45 08                  LEA EAX,[EBP + 0x8]
0069FE9E  50                        PUSH EAX
0069FE9F  68 88 1D 7D 00            PUSH 0x7d1d88
0069FEA4  56                        PUSH ESI
0069FEA5  E8 A6 01 09 00            CALL 0x00730050
0069FEAA  83 C4 18                  ADD ESP,0x18
0069FEAD  85 C0                     TEST EAX,EAX
0069FEAF  7E 4E                     JLE 0x0069feff
0069FEB1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069FEB4  56                        PUSH ESI
0069FEB5  8D 95 38 FF FF FF         LEA EDX,[EBP + 0xffffff38]
0069FEBB  68 C8 00 00 00            PUSH 0xc8
0069FEC0  52                        PUSH EDX
0069FEC1  89 4F 10                  MOV dword ptr [EDI + 0x10],ECX
0069FEC4  E8 47 0C 09 00            CALL 0x00730b10
0069FEC9  8D 45 08                  LEA EAX,[EBP + 0x8]
0069FECC  50                        PUSH EAX
0069FECD  68 88 1D 7D 00            PUSH 0x7d1d88
0069FED2  56                        PUSH ESI
0069FED3  E8 78 01 09 00            CALL 0x00730050
0069FED8  83 C4 18                  ADD ESP,0x18
0069FEDB  85 C0                     TEST EAX,EAX
0069FEDD  7E 20                     JLE 0x0069feff
0069FEDF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069FEE2  56                        PUSH ESI
0069FEE3  8D 95 38 FF FF FF         LEA EDX,[EBP + 0xffffff38]
0069FEE9  68 C8 00 00 00            PUSH 0xc8
0069FEEE  52                        PUSH EDX
0069FEEF  89 4F 1C                  MOV dword ptr [EDI + 0x1c],ECX
0069FEF2  E8 19 0C 09 00            CALL 0x00730b10
0069FEF7  83 C4 0C                  ADD ESP,0xc
0069FEFA  BB 01 00 00 00            MOV EBX,0x1
LAB_0069feff:
0069FEFF  56                        PUSH ESI
0069FF00  E8 8B EB 08 00            CALL 0x0072ea90
0069FF05  83 C4 04                  ADD ESP,0x4
LAB_0069ff08:
0069FF08  5E                        POP ESI
0069FF09  8B C3                     MOV EAX,EBX
0069FF0B  5F                        POP EDI
0069FF0C  5B                        POP EBX
0069FF0D  8B E5                     MOV ESP,EBP
0069FF0F  5D                        POP EBP
0069FF10  C3                        RET
LAB_0069ff11:
0069FF11  5F                        POP EDI
0069FF12  33 C0                     XOR EAX,EAX
0069FF14  5B                        POP EBX
0069FF15  8B E5                     MOV ESP,EBP
0069FF17  5D                        POP EBP
0069FF18  C3                        RET
