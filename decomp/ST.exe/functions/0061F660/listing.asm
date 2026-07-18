FUN_0061f660:
0061F660  55                        PUSH EBP
0061F661  8B EC                     MOV EBP,ESP
0061F663  83 EC 4C                  SUB ESP,0x4c
0061F666  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0061F66B  56                        PUSH ESI
0061F66C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0061F66F  57                        PUSH EDI
0061F670  8D 55 B8                  LEA EDX,[EBP + -0x48]
0061F673  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0061F676  6A 00                     PUSH 0x0
0061F678  52                        PUSH EDX
0061F679  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0061F67C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0061F682  E8 69 E1 10 00            CALL 0x0072d7f0
0061F687  8B F0                     MOV ESI,EAX
0061F689  83 C4 08                  ADD ESP,0x8
0061F68C  85 F6                     TEST ESI,ESI
0061F68E  0F 85 4F 01 00 00         JNZ 0x0061f7e3
0061F694  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0061F697  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
0061F69A  2B C6                     SUB EAX,ESI
0061F69C  74 59                     JZ 0x0061f6f7
0061F69E  83 E8 02                  SUB EAX,0x2
0061F6A1  74 22                     JZ 0x0061f6c5
0061F6A3  48                        DEC EAX
0061F6A4  0F 85 26 01 00 00         JNZ 0x0061f7d0
0061F6AA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0061F6AD  E8 95 54 DE FF            CALL 0x00404b47
0061F6B2  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0061F6B5  33 C0                     XOR EAX,EAX
0061F6B7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0061F6BD  5F                        POP EDI
0061F6BE  5E                        POP ESI
0061F6BF  8B E5                     MOV ESP,EBP
0061F6C1  5D                        POP EBP
0061F6C2  C2 04 00                  RET 0x4
LAB_0061f6c5:
0061F6C5  A1 84 B2 7F 00            MOV EAX,[0x007fb284]
0061F6CA  85 C0                     TEST EAX,EAX
0061F6CC  0F 84 FE 00 00 00         JZ 0x0061f7d0
0061F6D2  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0061F6D9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0061F6DC  99                        CDQ
0061F6DD  2B C2                     SUB EAX,EDX
0061F6DF  D1 F8                     SAR EAX,0x1
0061F6E1  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
0061F6E4  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0061F6E7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0061F6ED  33 C0                     XOR EAX,EAX
0061F6EF  5F                        POP EDI
0061F6F0  5E                        POP ESI
0061F6F1  8B E5                     MOV ESP,EBP
0061F6F3  5D                        POP EBP
0061F6F4  C2 04 00                  RET 0x4
LAB_0061f6f7:
0061F6F7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0061F6FA  BF F5 FF FF 0A            MOV EDI,0xafffff5
0061F6FF  8D 72 31                  LEA ESI,[EDX + 0x31]
LAB_0061f702:
0061F702  8A 46 EF                  MOV AL,byte ptr [ESI + -0x11]
0061F705  84 C0                     TEST AL,AL
0061F707  0F 84 AE 00 00 00         JZ 0x0061f7bb
0061F70D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061F713  57                        PUSH EDI
0061F714  E8 67 70 0C 00            CALL 0x006e6780
0061F719  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0061F71E  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0061F721  57                        PUSH EDI
0061F722  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
0061F728  2B C1                     SUB EAX,ECX
0061F72A  8B 4E FC                  MOV ECX,dword ptr [ESI + -0x4]
0061F72D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0061F730  0F AF 06                  IMUL EAX,dword ptr [ESI]
0061F733  DB 45 F8                  FILD dword ptr [EBP + -0x8]
0061F736  2B C8                     SUB ECX,EAX
0061F738  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0061F73B  DB 45 F8                  FILD dword ptr [EBP + -0x8]
0061F73E  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061F744  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0061F74A  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0061F750  D9 C1                     FLD ST1
0061F752  D8 4E 04                  FMUL float ptr [ESI + 0x4]
0061F755  D8 CA                     FMUL ST2
0061F757  D8 0D 84 07 79 00         FMUL float ptr [0x00790784]
0061F75D  DE C1                     FADDP
0061F75F  D9 55 F8                  FST float ptr [EBP + -0x8]
0061F762  DD D9                     FSTP ST1
0061F764  D8 1D F8 04 79 00         FCOMP float ptr [0x007904f8]
0061F76A  DF E0                     FNSTSW AX
0061F76C  F6 C4 41                  TEST AH,0x41
0061F76F  75 3B                     JNZ 0x0061f7ac
0061F771  DB 46 F4                  FILD dword ptr [ESI + -0xc]
0061F774  8B 56 F8                  MOV EDX,dword ptr [ESI + -0x8]
0061F777  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061F77A  52                        PUSH EDX
0061F77B  50                        PUSH EAX
0061F77C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061F782  51                        PUSH ECX
0061F783  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0061F789  D9 1C 24                  FSTP float ptr [ESP]
0061F78C  DB 46 F0                  FILD dword ptr [ESI + -0x10]
0061F78F  51                        PUSH ECX
0061F790  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061F796  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0061F79C  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0061F7A2  D9 1C 24                  FSTP float ptr [ESP]
0061F7A5  E8 66 6F 0C 00            CALL 0x006e6710
0061F7AA  EB 0F                     JMP 0x0061f7bb
LAB_0061f7ac:
0061F7AC  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061F7B2  E8 C9 6F 0C 00            CALL 0x006e6780
0061F7B7  C6 46 EF 00               MOV byte ptr [ESI + -0x11],0x0
LAB_0061f7bb:
0061F7BB  81 C7 FF FF FF 00         ADD EDI,0xffffff
0061F7C1  83 C6 1D                  ADD ESI,0x1d
0061F7C4  81 FF F0 FF FF 0F         CMP EDI,0xffffff0
0061F7CA  0F 8C 32 FF FF FF         JL 0x0061f702
LAB_0061f7d0:
0061F7D0  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0061F7D3  33 C0                     XOR EAX,EAX
0061F7D5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0061F7DB  5F                        POP EDI
0061F7DC  5E                        POP ESI
0061F7DD  8B E5                     MOV ESP,EBP
0061F7DF  5D                        POP EBP
0061F7E0  C2 04 00                  RET 0x4
LAB_0061f7e3:
0061F7E3  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0061F7E6  68 30 02 7D 00            PUSH 0x7d0230
0061F7EB  68 CC 4C 7A 00            PUSH 0x7a4ccc
0061F7F0  56                        PUSH ESI
0061F7F1  6A 00                     PUSH 0x0
0061F7F3  6A 6E                     PUSH 0x6e
0061F7F5  68 0C 02 7D 00            PUSH 0x7d020c
0061F7FA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0061F800  E8 CB DC 08 00            CALL 0x006ad4d0
0061F805  83 C4 18                  ADD ESP,0x18
0061F808  85 C0                     TEST EAX,EAX
0061F80A  74 01                     JZ 0x0061f80d
0061F80C  CC                        INT3
LAB_0061f80d:
0061F80D  6A 70                     PUSH 0x70
0061F80F  68 0C 02 7D 00            PUSH 0x7d020c
0061F814  6A 00                     PUSH 0x0
0061F816  56                        PUSH ESI
0061F817  E8 24 66 08 00            CALL 0x006a5e40
0061F81C  5F                        POP EDI
0061F81D  B8 FF FF 00 00            MOV EAX,0xffff
0061F822  5E                        POP ESI
0061F823  8B E5                     MOV ESP,EBP
0061F825  5D                        POP EBP
0061F826  C2 04 00                  RET 0x4
