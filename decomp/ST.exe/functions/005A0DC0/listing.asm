FSGSTy::ConnectProc:
005A0DC0  55                        PUSH EBP
005A0DC1  8B EC                     MOV EBP,ESP
005A0DC3  83 EC 48                  SUB ESP,0x48
005A0DC6  8A 81 5F 1A 00 00         MOV AL,byte ptr [ECX + 0x1a5f]
005A0DCC  53                        PUSH EBX
005A0DCD  56                        PUSH ESI
005A0DCE  3C 01                     CMP AL,0x1
005A0DD0  57                        PUSH EDI
005A0DD1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005A0DD4  0F 85 98 01 00 00         JNZ 0x005a0f72
005A0DDA  8B 81 C0 1A 00 00         MOV EAX,dword ptr [ECX + 0x1ac0]
005A0DE0  85 C0                     TEST EAX,EAX
005A0DE2  0F 84 8A 01 00 00         JZ 0x005a0f72
005A0DE8  8B 81 BC 1A 00 00         MOV EAX,dword ptr [ECX + 0x1abc]
005A0DEE  85 C0                     TEST EAX,EAX
005A0DF0  0F 8C 7C 01 00 00         JL 0x005a0f72
005A0DF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A0DFB  8D 55 BC                  LEA EDX,[EBP + -0x44]
005A0DFE  8D 4D B8                  LEA ECX,[EBP + -0x48]
005A0E01  6A 00                     PUSH 0x0
005A0E03  52                        PUSH EDX
005A0E04  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005A0E07  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A0E0D  E8 DE C9 18 00            CALL 0x0072d7f0
005A0E12  8B F0                     MOV ESI,EAX
005A0E14  83 C4 08                  ADD ESP,0x8
005A0E17  85 F6                     TEST ESI,ESI
005A0E19  0F 85 14 01 00 00         JNZ 0x005a0f33
005A0E1F  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005A0E22  8B 83 C0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac0]
005A0E28  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
005A0E2B  85 F6                     TEST ESI,ESI
005A0E2D  75 18                     JNZ 0x005a0e47
005A0E2F  66 8B 70 0E               MOV SI,word ptr [EAX + 0xe]
005A0E33  0F AF 70 04               IMUL ESI,dword ptr [EAX + 0x4]
005A0E37  83 C6 1F                  ADD ESI,0x1f
005A0E3A  C1 EE 03                  SHR ESI,0x3
005A0E3D  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
005A0E43  0F AF 70 08               IMUL ESI,dword ptr [EAX + 0x8]
LAB_005a0e47:
005A0E47  50                        PUSH EAX
005A0E48  E8 53 41 11 00            CALL 0x006b4fa0
005A0E4D  8B CE                     MOV ECX,ESI
005A0E4F  8B F8                     MOV EDI,EAX
005A0E51  8B D1                     MOV EDX,ECX
005A0E53  83 C8 FF                  OR EAX,0xffffffff
005A0E56  C1 E9 02                  SHR ECX,0x2
005A0E59  F3 AB                     STOSD.REP ES:EDI
005A0E5B  8B CA                     MOV ECX,EDX
005A0E5D  68 F0 00 00 00            PUSH 0xf0
005A0E62  83 E1 03                  AND ECX,0x3
005A0E65  68 B8 01 00 00            PUSH 0x1b8
005A0E6A  F3 AA                     STOSB.REP ES:EDI
005A0E6C  8B 83 C0 1A 00 00         MOV EAX,dword ptr [EBX + 0x1ac0]
005A0E72  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A0E78  6A 16                     PUSH 0x16
005A0E7A  6A 00                     PUSH 0x0
005A0E7C  6A 00                     PUSH 0x0
005A0E7E  50                        PUSH EAX
005A0E7F  E8 0C FC 16 00            CALL 0x00710a90
005A0E84  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005A0E87  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005A0E8A  3B C1                     CMP EAX,ECX
005A0E8C  7D 34                     JGE 0x005a0ec2
005A0E8E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005A0E91  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005A0E94  C1 E0 02                  SHL EAX,0x2
005A0E97  99                        CDQ
005A0E98  F7 F9                     IDIV ECX
005A0E9A  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A0EA0  50                        PUSH EAX
005A0EA1  51                        PUSH ECX
005A0EA2  68 71 25 00 00            PUSH 0x2571
005A0EA7  E8 94 F2 10 00            CALL 0x006b0140
005A0EAC  50                        PUSH EAX
005A0EAD  68 EC C3 7C 00            PUSH 0x7cc3ec
005A0EB2  68 3A F3 80 00            PUSH 0x80f33a
005A0EB7  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005A0EBD  83 C4 10                  ADD ESP,0x10
005A0EC0  EB 33                     JMP 0x005a0ef5
LAB_005a0ec2:
005A0EC2  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005A0EC8  52                        PUSH EDX
005A0EC9  68 70 25 00 00            PUSH 0x2570
005A0ECE  E8 6D F2 10 00            CALL 0x006b0140
005A0ED3  8B F8                     MOV EDI,EAX
005A0ED5  83 C9 FF                  OR ECX,0xffffffff
005A0ED8  33 C0                     XOR EAX,EAX
005A0EDA  F2 AE                     SCASB.REPNE ES:EDI
005A0EDC  F7 D1                     NOT ECX
005A0EDE  2B F9                     SUB EDI,ECX
005A0EE0  8B C1                     MOV EAX,ECX
005A0EE2  8B F7                     MOV ESI,EDI
005A0EE4  BF 3A F3 80 00            MOV EDI,0x80f33a
005A0EE9  C1 E9 02                  SHR ECX,0x2
005A0EEC  F3 A5                     MOVSD.REP ES:EDI,ESI
005A0EEE  8B C8                     MOV ECX,EAX
005A0EF0  83 E1 03                  AND ECX,0x3
005A0EF3  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_005a0ef5:
005A0EF5  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
005A0EFB  6A FF                     PUSH -0x1
005A0EFD  6A FF                     PUSH -0x1
005A0EFF  6A 02                     PUSH 0x2
005A0F01  6A FF                     PUSH -0x1
005A0F03  6A FF                     PUSH -0x1
005A0F05  68 3A F3 80 00            PUSH 0x80f33a
005A0F0A  E8 61 0C 17 00            CALL 0x00711b70
005A0F0F  8B 8B BC 1A 00 00         MOV ECX,dword ptr [EBX + 0x1abc]
005A0F15  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005A0F1B  51                        PUSH ECX
005A0F1C  52                        PUSH EDX
005A0F1D  E8 AE 26 11 00            CALL 0x006b35d0
005A0F22  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005A0F25  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005A0F2A  5F                        POP EDI
005A0F2B  5E                        POP ESI
005A0F2C  5B                        POP EBX
005A0F2D  8B E5                     MOV ESP,EBP
005A0F2F  5D                        POP EBP
005A0F30  C2 08 00                  RET 0x8
LAB_005a0f33:
005A0F33  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005A0F36  68 D4 C3 7C 00            PUSH 0x7cc3d4
005A0F3B  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A0F40  56                        PUSH ESI
005A0F41  6A 00                     PUSH 0x0
005A0F43  68 09 09 00 00            PUSH 0x909
005A0F48  68 70 BF 7C 00            PUSH 0x7cbf70
005A0F4D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A0F53  E8 78 C5 10 00            CALL 0x006ad4d0
005A0F58  83 C4 18                  ADD ESP,0x18
005A0F5B  85 C0                     TEST EAX,EAX
005A0F5D  74 01                     JZ 0x005a0f60
005A0F5F  CC                        INT3
LAB_005a0f60:
005A0F60  68 09 09 00 00            PUSH 0x909
005A0F65  68 70 BF 7C 00            PUSH 0x7cbf70
005A0F6A  6A 00                     PUSH 0x0
005A0F6C  56                        PUSH ESI
005A0F6D  E8 CE 4E 10 00            CALL 0x006a5e40
LAB_005a0f72:
005A0F72  5F                        POP EDI
005A0F73  5E                        POP ESI
005A0F74  5B                        POP EBX
005A0F75  8B E5                     MOV ESP,EBP
005A0F77  5D                        POP EBP
005A0F78  C2 08 00                  RET 0x8
