FSGSTy::SetLadder:
005A40F0  55                        PUSH EBP
005A40F1  8B EC                     MOV EBP,ESP
005A40F3  83 EC 68                  SUB ESP,0x68
005A40F6  53                        PUSH EBX
005A40F7  56                        PUSH ESI
005A40F8  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005A40FE  57                        PUSH EDI
005A40FF  8B F9                     MOV EDI,ECX
005A4101  85 F6                     TEST ESI,ESI
005A4103  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005A4106  74 4D                     JZ 0x005a4155
005A4108  C6 86 93 04 00 00 01      MOV byte ptr [ESI + 0x493],0x1
005A410F  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005A4118  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005A411E  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005A4124  50                        PUSH EAX
005A4125  51                        PUSH ECX
005A4126  6A 00                     PUSH 0x0
005A4128  8B CE                     MOV ECX,ESI
005A412A  E8 4F 0F E6 FF            CALL 0x0040507e
005A412F  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005A4135  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005A413B  52                        PUSH EDX
005A413C  50                        PUSH EAX
005A413D  8B CE                     MOV ECX,ESI
005A413F  E8 DA E2 E5 FF            CALL 0x0040241e
005A4144  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005A414B  C7 86 DF 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4df],0xffffffff
LAB_005a4155:
005A4155  80 BF 5F 1A 00 00 09      CMP byte ptr [EDI + 0x1a5f],0x9
005A415C  0F 85 5C 01 00 00         JNZ 0x005a42be
005A4162  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005A4168  8D 45 9C                  LEA EAX,[EBP + -0x64]
005A416B  8D 55 98                  LEA EDX,[EBP + -0x68]
005A416E  6A 00                     PUSH 0x0
005A4170  50                        PUSH EAX
005A4171  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
005A4174  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A417A  E8 71 96 18 00            CALL 0x0072d7f0
005A417F  8B F0                     MOV ESI,EAX
005A4181  83 C4 08                  ADD ESP,0x8
005A4184  85 F6                     TEST ESI,ESI
005A4186  0F 85 F3 00 00 00         JNZ 0x005a427f
005A418C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005A418F  8B 83 DB 1E 00 00         MOV EAX,dword ptr [EBX + 0x1edb]
005A4195  8D B3 DB 1E 00 00         LEA ESI,[EBX + 0x1edb]
005A419B  85 C0                     TEST EAX,EAX
005A419D  74 06                     JZ 0x005a41a5
005A419F  56                        PUSH ESI
005A41A0  E8 BB 6E 10 00            CALL 0x006ab060
LAB_005a41a5:
005A41A5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005A41A8  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005A41AB  89 8B DF 1E 00 00         MOV dword ptr [EBX + 0x1edf],ECX
005A41B1  89 83 E3 1E 00 00         MOV dword ptr [EBX + 0x1ee3],EAX
005A41B7  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
005A41BA  C1 E2 02                  SHL EDX,0x2
005A41BD  52                        PUSH EDX
005A41BE  E8 AD 6A 10 00            CALL 0x006aac70
005A41C3  8B 8B E3 1E 00 00         MOV ECX,dword ptr [EBX + 0x1ee3]
005A41C9  89 06                     MOV dword ptr [ESI],EAX
005A41CB  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
005A41CE  8B F8                     MOV EDI,EAX
005A41D0  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
005A41D3  C1 E1 02                  SHL ECX,0x2
005A41D6  8B C1                     MOV EAX,ECX
005A41D8  C1 E9 02                  SHR ECX,0x2
005A41DB  F3 A5                     MOVSD.REP ES:EDI,ESI
005A41DD  8B C8                     MOV ECX,EAX
005A41DF  83 E1 03                  AND ECX,0x3
005A41E2  F3 A4                     MOVSB.REP ES:EDI,ESI
005A41E4  8B CB                     MOV ECX,EBX
005A41E6  E8 46 DE E5 FF            CALL 0x00402031
005A41EB  B9 08 00 00 00            MOV ECX,0x8
005A41F0  33 C0                     XOR EAX,EAX
005A41F2  8D 7D DC                  LEA EDI,[EBP + -0x24]
005A41F5  33 F6                     XOR ESI,ESI
005A41F7  F3 AB                     STOSD.REP ES:EDI
005A41F9  8B 83 DF 1E 00 00         MOV EAX,dword ptr [EBX + 0x1edf]
005A41FF  C7 45 EC 20 00 00 00      MOV dword ptr [EBP + -0x14],0x20
005A4206  3B C6                     CMP EAX,ESI
005A4208  74 11                     JZ 0x005a421b
005A420A  8B 83 6B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a6b]
005A4210  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
005A4217  3B C6                     CMP EAX,ESI
005A4219  75 03                     JNZ 0x005a421e
LAB_005a421b:
005A421B  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_005a421e:
005A421E  8B 83 D3 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ed3]
005A4224  3B C6                     CMP EAX,ESI
005A4226  74 0E                     JZ 0x005a4236
005A4228  8D 4D DC                  LEA ECX,[EBP + -0x24]
005A422B  51                        PUSH ECX
005A422C  50                        PUSH EAX
005A422D  6A 02                     PUSH 0x2
005A422F  8B CB                     MOV ECX,EBX
005A4231  E8 4A 1E 14 00            CALL 0x006e6080
LAB_005a4236:
005A4236  81 BB DF 1E 00 00 30 42 0F 00  CMP dword ptr [EBX + 0x1edf],0xf4230
005A4240  73 11                     JNC 0x005a4253
005A4242  8B 83 6B 1A 00 00         MOV EAX,dword ptr [EBX + 0x1a6b]
005A4248  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
005A424F  3B C6                     CMP EAX,ESI
005A4251  75 03                     JNZ 0x005a4256
LAB_005a4253:
005A4253  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_005a4256:
005A4256  8B 83 D7 1E 00 00         MOV EAX,dword ptr [EBX + 0x1ed7]
005A425C  3B C6                     CMP EAX,ESI
005A425E  74 0E                     JZ 0x005a426e
005A4260  8D 55 DC                  LEA EDX,[EBP + -0x24]
005A4263  8B CB                     MOV ECX,EBX
005A4265  52                        PUSH EDX
005A4266  50                        PUSH EAX
005A4267  6A 02                     PUSH 0x2
005A4269  E8 12 1E 14 00            CALL 0x006e6080
LAB_005a426e:
005A426E  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
005A4271  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005A4276  5F                        POP EDI
005A4277  5E                        POP ESI
005A4278  5B                        POP EBX
005A4279  8B E5                     MOV ESP,EBP
005A427B  5D                        POP EBP
005A427C  C2 10 00                  RET 0x10
LAB_005a427f:
005A427F  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
005A4282  68 C0 C5 7C 00            PUSH 0x7cc5c0
005A4287  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A428C  56                        PUSH ESI
005A428D  6A 00                     PUSH 0x0
005A428F  68 65 0B 00 00            PUSH 0xb65
005A4294  68 70 BF 7C 00            PUSH 0x7cbf70
005A4299  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A429F  E8 2C 92 10 00            CALL 0x006ad4d0
005A42A4  83 C4 18                  ADD ESP,0x18
005A42A7  85 C0                     TEST EAX,EAX
005A42A9  74 01                     JZ 0x005a42ac
005A42AB  CC                        INT3
LAB_005a42ac:
005A42AC  68 65 0B 00 00            PUSH 0xb65
005A42B1  68 70 BF 7C 00            PUSH 0x7cbf70
005A42B6  6A 00                     PUSH 0x0
005A42B8  56                        PUSH ESI
005A42B9  E8 82 1B 10 00            CALL 0x006a5e40
LAB_005a42be:
005A42BE  5F                        POP EDI
005A42BF  5E                        POP ESI
005A42C0  5B                        POP EBX
005A42C1  8B E5                     MOV ESP,EBP
005A42C3  5D                        POP EBP
005A42C4  C2 10 00                  RET 0x10
