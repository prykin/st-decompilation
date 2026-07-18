STGroupBoatC::Recharge:
0049F640  55                        PUSH EBP
0049F641  8B EC                     MOV EBP,ESP
0049F643  83 EC 64                  SUB ESP,0x64
0049F646  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
0049F649  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0049F64F  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0049F652  53                        PUSH EBX
0049F653  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049F656  56                        PUSH ESI
0049F657  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0049F65A  33 DB                     XOR EBX,EBX
0049F65C  57                        PUSH EDI
0049F65D  8D 4D A0                  LEA ECX,[EBP + -0x60]
0049F660  8D 45 9C                  LEA EAX,[EBP + -0x64]
0049F663  53                        PUSH EBX
0049F664  51                        PUSH ECX
0049F665  C7 45 F4 02 00 00 00      MOV dword ptr [EBP + -0xc],0x2
0049F66C  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
0049F66F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049F674  E8 77 E1 28 00            CALL 0x0072d7f0
0049F679  8B F0                     MOV ESI,EAX
0049F67B  83 C4 08                  ADD ESP,0x8
0049F67E  3B F3                     CMP ESI,EBX
0049F680  0F 85 93 01 00 00         JNZ 0x0049f819
0049F686  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049F689  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0049F68C  3B C3                     CMP EAX,EBX
0049F68E  74 09                     JZ 0x0049f699
0049F690  83 F8 01                  CMP EAX,0x1
0049F693  0F 85 CC 00 00 00         JNZ 0x0049f765
LAB_0049f699:
0049F699  B9 15 00 00 00            MOV ECX,0x15
0049F69E  33 C0                     XOR EAX,EAX
0049F6A0  8D BE 89 00 00 00         LEA EDI,[ESI + 0x89]
0049F6A6  8D 96 99 01 00 00         LEA EDX,[ESI + 0x199]
0049F6AC  F3 AB                     STOSD.REP ES:EDI
0049F6AE  8D 86 CE 02 00 00         LEA EAX,[ESI + 0x2ce]
0049F6B4  89 5E 65                  MOV dword ptr [ESI + 0x65],EBX
0049F6B7  8B 3A                     MOV EDI,dword ptr [EDX]
0049F6B9  8B C8                     MOV ECX,EAX
0049F6BB  89 39                     MOV dword ptr [ECX],EDI
0049F6BD  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
0049F6C0  89 79 04                  MOV dword ptr [ECX + 0x4],EDI
0049F6C3  66 8B 52 08               MOV DX,word ptr [EDX + 0x8]
0049F6C7  66 89 51 08               MOV word ptr [ECX + 0x8],DX
0049F6CB  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049F6D1  8B 00                     MOV EAX,dword ptr [EAX]
0049F6D3  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0049F6D9  66 8B 8E D2 02 00 00      MOV CX,word ptr [ESI + 0x2d2]
0049F6E0  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0049F6E3  66 8B 86 D6 02 00 00      MOV AX,word ptr [ESI + 0x2d6]
0049F6EA  66 89 45 EC               MOV word ptr [EBP + -0x14],AX
0049F6EE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049F6F1  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0049F6F4  66 8B 96 D4 02 00 00      MOV DX,word ptr [ESI + 0x2d4]
0049F6FB  85 C0                     TEST EAX,EAX
0049F6FD  66 89 4D E8               MOV word ptr [EBP + -0x18],CX
0049F701  66 89 55 EA               MOV word ptr [EBP + -0x16],DX
0049F705  7E 5E                     JLE 0x0049f765
LAB_0049f707:
0049F707  8D 4D F8                  LEA ECX,[EBP + -0x8]
0049F70A  8B D3                     MOV EDX,EBX
0049F70C  51                        PUSH ECX
0049F70D  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
0049F710  E8 5B D5 20 00            CALL 0x006acc70
0049F715  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049F718  66 3D FF FF               CMP AX,0xffff
0049F71C  74 3F                     JZ 0x0049f75d
0049F71E  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
0049F721  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049F727  6A 01                     PUSH 0x1
0049F729  50                        PUSH EAX
0049F72A  52                        PUSH EDX
0049F72B  E8 8A 31 F6 FF            CALL 0x004028ba
0049F730  8B F8                     MOV EDI,EAX
0049F732  85 FF                     TEST EDI,EDI
0049F734  75 1A                     JNZ 0x0049f750
0049F736  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049F73B  68 11 0C 00 00            PUSH 0xc11
0049F740  68 3C BE 7A 00            PUSH 0x7abe3c
0049F745  50                        PUSH EAX
0049F746  68 04 00 FE AF            PUSH 0xaffe0004
0049F74B  E8 F0 66 20 00            CALL 0x006a5e40
LAB_0049f750:
0049F750  8D 4D E0                  LEA ECX,[EBP + -0x20]
0049F753  51                        PUSH ECX
0049F754  6A 16                     PUSH 0x16
0049F756  8B CF                     MOV ECX,EDI
0049F758  E8 C9 29 F6 FF            CALL 0x00402126
LAB_0049f75d:
0049F75D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049F760  43                        INC EBX
0049F761  3B D8                     CMP EBX,EAX
0049F763  7C A2                     JL 0x0049f707
LAB_0049f765:
0049F765  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0049F76B  B9 19 00 00 00            MOV ECX,0x19
0049F770  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0049F776  33 D2                     XOR EDX,EDX
0049F778  F7 F1                     DIV ECX
0049F77A  83 FA 07                  CMP EDX,0x7
0049F77D  0F 85 81 00 00 00         JNZ 0x0049f804
0049F783  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049F786  33 DB                     XOR EBX,EBX
0049F788  85 C0                     TEST EAX,EAX
0049F78A  7E 6C                     JLE 0x0049f7f8
LAB_0049f78c:
0049F78C  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
0049F78F  8D 55 F8                  LEA EDX,[EBP + -0x8]
0049F792  52                        PUSH EDX
0049F793  8B D3                     MOV EDX,EBX
0049F795  E8 D6 D4 20 00            CALL 0x006acc70
0049F79A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049F79D  66 3D FF FF               CMP AX,0xffff
0049F7A1  74 4D                     JZ 0x0049f7f0
0049F7A3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049F7A9  6A 01                     PUSH 0x1
0049F7AB  50                        PUSH EAX
0049F7AC  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0049F7AF  50                        PUSH EAX
0049F7B0  E8 05 31 F6 FF            CALL 0x004028ba
0049F7B5  8B F8                     MOV EDI,EAX
0049F7B7  85 FF                     TEST EDI,EDI
0049F7B9  75 1B                     JNZ 0x0049f7d6
0049F7BB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049F7C1  68 1C 0C 00 00            PUSH 0xc1c
0049F7C6  68 3C BE 7A 00            PUSH 0x7abe3c
0049F7CB  51                        PUSH ECX
0049F7CC  68 04 00 FE AF            PUSH 0xaffe0004
0049F7D1  E8 6A 66 20 00            CALL 0x006a5e40
LAB_0049f7d6:
0049F7D6  8B CF                     MOV ECX,EDI
0049F7D8  E8 FF 36 F6 FF            CALL 0x00402edc
0049F7DD  83 F8 16                  CMP EAX,0x16
0049F7E0  74 16                     JZ 0x0049f7f8
0049F7E2  6A 16                     PUSH 0x16
0049F7E4  8B CF                     MOV ECX,EDI
0049F7E6  E8 0E 56 F6 FF            CALL 0x00404df9
0049F7EB  83 F8 01                  CMP EAX,0x1
0049F7EE  74 08                     JZ 0x0049f7f8
LAB_0049f7f0:
0049F7F0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049F7F3  43                        INC EBX
0049F7F4  3B D8                     CMP EBX,EAX
0049F7F6  7C 94                     JL 0x0049f78c
LAB_0049f7f8:
0049F7F8  3B 5D FC                  CMP EBX,dword ptr [EBP + -0x4]
0049F7FB  75 07                     JNZ 0x0049f804
0049F7FD  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_0049f804:
0049F804  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0049F807  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_0049f80d:
0049F80D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049F810  5F                        POP EDI
0049F811  5E                        POP ESI
0049F812  5B                        POP EBX
0049F813  8B E5                     MOV ESP,EBP
0049F815  5D                        POP EBP
0049F816  C2 04 00                  RET 0x4
LAB_0049f819:
0049F819  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0049F81C  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0049F822  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049F827  74 E4                     JZ 0x0049f80d
0049F829  68 08 C1 7A 00            PUSH 0x7ac108
0049F82E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049F833  56                        PUSH ESI
0049F834  53                        PUSH EBX
0049F835  68 25 0C 00 00            PUSH 0xc25
0049F83A  68 3C BE 7A 00            PUSH 0x7abe3c
0049F83F  E8 8C DC 20 00            CALL 0x006ad4d0
0049F844  83 C4 18                  ADD ESP,0x18
0049F847  85 C0                     TEST EAX,EAX
0049F849  74 01                     JZ 0x0049f84c
0049F84B  CC                        INT3
LAB_0049f84c:
0049F84C  68 26 0C 00 00            PUSH 0xc26
0049F851  68 3C BE 7A 00            PUSH 0x7abe3c
0049F856  53                        PUSH EBX
0049F857  56                        PUSH ESI
0049F858  E8 E3 65 20 00            CALL 0x006a5e40
0049F85D  5F                        POP EDI
0049F85E  5E                        POP ESI
0049F85F  83 C8 FF                  OR EAX,0xffffffff
0049F862  5B                        POP EBX
0049F863  8B E5                     MOV ESP,EBP
0049F865  5D                        POP EBP
0049F866  C2 04 00                  RET 0x4
