FUN_0059d720:
0059D720  55                        PUSH EBP
0059D721  8B EC                     MOV EBP,ESP
0059D723  81 EC D8 08 00 00         SUB ESP,0x8d8
0059D729  8B 91 0C 1B 00 00         MOV EDX,dword ptr [ECX + 0x1b0c]
0059D72F  53                        PUSH EBX
0059D730  56                        PUSH ESI
0059D731  57                        PUSH EDI
0059D732  85 D2                     TEST EDX,EDX
0059D734  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0059D737  0F 84 FD 02 00 00         JZ 0x0059da3a
0059D73D  B9 23 02 00 00            MOV ECX,0x223
0059D742  33 C0                     XOR EAX,EAX
0059D744  8D BD 28 F7 FF FF         LEA EDI,[EBP + 0xfffff728]
0059D74A  BE 1D 7E 80 00            MOV ESI,0x807e1d
0059D74F  F3 AB                     STOSD.REP ES:EDI
0059D751  8B C2                     MOV EAX,EDX
LAB_0059d753:
0059D753  8A 10                     MOV DL,byte ptr [EAX]
0059D755  8A 1E                     MOV BL,byte ptr [ESI]
0059D757  8A CA                     MOV CL,DL
0059D759  3A D3                     CMP DL,BL
0059D75B  75 1E                     JNZ 0x0059d77b
0059D75D  84 C9                     TEST CL,CL
0059D75F  74 16                     JZ 0x0059d777
0059D761  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
0059D764  8A 5E 01                  MOV BL,byte ptr [ESI + 0x1]
0059D767  8A CA                     MOV CL,DL
0059D769  3A D3                     CMP DL,BL
0059D76B  75 0E                     JNZ 0x0059d77b
0059D76D  83 C0 02                  ADD EAX,0x2
0059D770  83 C6 02                  ADD ESI,0x2
0059D773  84 C9                     TEST CL,CL
0059D775  75 DC                     JNZ 0x0059d753
LAB_0059d777:
0059D777  33 C0                     XOR EAX,EAX
0059D779  EB 05                     JMP 0x0059d780
LAB_0059d77b:
0059D77B  1B C0                     SBB EAX,EAX
0059D77D  83 D8 FF                  SBB EAX,-0x1
LAB_0059d780:
0059D780  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0059D783  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059D788  8D 55 B8                  LEA EDX,[EBP + -0x48]
0059D78B  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0059D78E  6A 00                     PUSH 0x0
0059D790  52                        PUSH EDX
0059D791  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0059D794  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059D79A  E8 51 00 19 00            CALL 0x0072d7f0
0059D79F  8B F0                     MOV ESI,EAX
0059D7A1  83 C4 08                  ADD ESP,0x8
0059D7A4  85 F6                     TEST ESI,ESI
0059D7A6  0F 85 50 02 00 00         JNZ 0x0059d9fc
0059D7AC  6A 01                     PUSH 0x1
0059D7AE  6A 01                     PUSH 0x1
0059D7B0  50                        PUSH EAX
0059D7B1  E8 3A 7D 11 00            CALL 0x006b54f0
0059D7B6  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0059D7B9  68 A0 16 80 00            PUSH 0x8016a0
0059D7BE  50                        PUSH EAX
0059D7BF  89 86 F8 1A 00 00         MOV dword ptr [ESI + 0x1af8],EAX
0059D7C5  E8 D6 82 11 00            CALL 0x006b5aa0
0059D7CA  6A 01                     PUSH 0x1
0059D7CC  6A 01                     PUSH 0x1
0059D7CE  6A 00                     PUSH 0x0
0059D7D0  E8 1B 7D 11 00            CALL 0x006b54f0
0059D7D5  68 A0 16 80 00            PUSH 0x8016a0
0059D7DA  50                        PUSH EAX
0059D7DB  89 86 FC 1A 00 00         MOV dword ptr [ESI + 0x1afc],EAX
0059D7E1  E8 BA 82 11 00            CALL 0x006b5aa0
0059D7E6  6A 01                     PUSH 0x1
0059D7E8  6A 01                     PUSH 0x1
0059D7EA  6A 00                     PUSH 0x0
0059D7EC  E8 FF 7C 11 00            CALL 0x006b54f0
0059D7F1  68 A0 16 80 00            PUSH 0x8016a0
0059D7F6  50                        PUSH EAX
0059D7F7  89 86 00 1B 00 00         MOV dword ptr [ESI + 0x1b00],EAX
0059D7FD  E8 9E 82 11 00            CALL 0x006b5aa0
0059D802  6A 01                     PUSH 0x1
0059D804  6A 01                     PUSH 0x1
0059D806  6A 00                     PUSH 0x0
0059D808  E8 E3 7C 11 00            CALL 0x006b54f0
0059D80D  68 A0 16 80 00            PUSH 0x8016a0
0059D812  50                        PUSH EAX
0059D813  89 86 04 1B 00 00         MOV dword ptr [ESI + 0x1b04],EAX
0059D819  E8 82 82 11 00            CALL 0x006b5aa0
0059D81E  B9 23 02 00 00            MOV ECX,0x223
0059D823  33 C0                     XOR EAX,EAX
0059D825  8D BD 28 F7 FF FF         LEA EDI,[EBP + 0xfffff728]
0059D82B  F3 AB                     STOSD.REP ES:EDI
0059D82D  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0059D830  C7 85 28 F7 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff728],0x1
0059D83A  85 FF                     TEST EDI,EDI
0059D83C  C7 85 2C F7 FF FF 89 00 00 00  MOV dword ptr [EBP + 0xfffff72c],0x89
0059D846  74 0A                     JZ 0x0059d852
0059D848  C7 85 2C F7 FF FF 99 00 00 00  MOV dword ptr [EBP + 0xfffff72c],0x99
LAB_0059d852:
0059D852  8B 86 73 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a73]
0059D858  8B 8E F8 1A 00 00         MOV ECX,dword ptr [ESI + 0x1af8]
0059D85E  89 85 30 F7 FF FF         MOV dword ptr [EBP + 0xfffff730],EAX
0059D864  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0059D867  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0059D86A  89 85 54 F7 FF FF         MOV dword ptr [EBP + 0xfffff754],EAX
0059D870  89 85 74 F7 FF FF         MOV dword ptr [EBP + 0xfffff774],EAX
0059D876  B8 02 00 00 00            MOV EAX,0x2
0059D87B  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0059D87E  89 85 58 F7 FF FF         MOV dword ptr [EBP + 0xfffff758],EAX
0059D884  89 85 78 F7 FF FF         MOV dword ptr [EBP + 0xfffff778],EAX
0059D88A  8D 85 28 F7 FF FF         LEA EAX,[EBP + 0xfffff728]
0059D890  89 8D 48 F7 FF FF         MOV dword ptr [EBP + 0xfffff748],ECX
0059D896  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059D899  6A 00                     PUSH 0x0
0059D89B  50                        PUSH EAX
0059D89C  8D 86 D8 1A 00 00         LEA EAX,[ESI + 0x1ad8]
0059D8A2  C7 85 34 F7 FF FF D2 00 00 00  MOV dword ptr [EBP + 0xfffff734],0xd2
0059D8AC  C7 85 38 F7 FF FF B5 00 00 00  MOV dword ptr [EBP + 0xfffff738],0xb5
0059D8B6  C7 85 3C F7 FF FF 64 00 00 00  MOV dword ptr [EBP + 0xfffff73c],0x64
0059D8C0  C7 85 40 F7 FF FF 14 00 00 00  MOV dword ptr [EBP + 0xfffff740],0x14
0059D8CA  C7 85 44 F7 FF FF FF 01 00 00  MOV dword ptr [EBP + 0xfffff744],0x1ff
0059D8D4  C7 85 5C F7 FF FF FF 68 00 00  MOV dword ptr [EBP + 0xfffff75c],0x68ff
0059D8DE  C7 85 7C F7 FF FF 7F 69 00 00  MOV dword ptr [EBP + 0xfffff77c],0x697f
0059D8E8  C7 45 A0 55 69 00 00      MOV dword ptr [EBP + -0x60],0x6955
0059D8EF  8B 11                     MOV EDX,dword ptr [ECX]
0059D8F1  6A 00                     PUSH 0x0
0059D8F3  50                        PUSH EAX
0059D8F4  6A 06                     PUSH 0x6
0059D8F6  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059D8F9  8B 8E FC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1afc]
0059D8FF  8D 85 28 F7 FF FF         LEA EAX,[EBP + 0xfffff728]
0059D905  89 8D 48 F7 FF FF         MOV dword ptr [EBP + 0xfffff748],ECX
0059D90B  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059D90E  6A 00                     PUSH 0x0
0059D910  50                        PUSH EAX
0059D911  8D 86 DC 1A 00 00         LEA EAX,[ESI + 0x1adc]
0059D917  C7 85 34 F7 FF FF 5E 01 00 00  MOV dword ptr [EBP + 0xfffff734],0x15e
0059D921  8B 11                     MOV EDX,dword ptr [ECX]
0059D923  6A 00                     PUSH 0x0
0059D925  50                        PUSH EAX
0059D926  6A 06                     PUSH 0x6
0059D928  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059D92B  8B 8E 00 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b00]
0059D931  8D 85 28 F7 FF FF         LEA EAX,[EBP + 0xfffff728]
0059D937  89 8D 48 F7 FF FF         MOV dword ptr [EBP + 0xfffff748],ECX
0059D93D  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059D940  6A 00                     PUSH 0x0
0059D942  50                        PUSH EAX
0059D943  8D 86 E0 1A 00 00         LEA EAX,[ESI + 0x1ae0]
0059D949  C7 85 34 F7 FF FF EA 01 00 00  MOV dword ptr [EBP + 0xfffff734],0x1ea
0059D953  8B 11                     MOV EDX,dword ptr [ECX]
0059D955  6A 00                     PUSH 0x0
0059D957  50                        PUSH EAX
0059D958  6A 06                     PUSH 0x6
0059D95A  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059D95D  85 FF                     TEST EDI,EDI
0059D95F  C7 85 2C F7 FF FF C8 00 00 00  MOV dword ptr [EBP + 0xfffff72c],0xc8
0059D969  74 0A                     JZ 0x0059d975
0059D96B  C7 85 2C F7 FF FF CC 00 00 00  MOV dword ptr [EBP + 0xfffff72c],0xcc
LAB_0059d975:
0059D975  8B 8E 04 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b04]
0059D97B  8D 85 28 F7 FF FF         LEA EAX,[EBP + 0xfffff728]
0059D981  89 8D 48 F7 FF FF         MOV dword ptr [EBP + 0xfffff748],ECX
0059D987  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059D98A  6A 00                     PUSH 0x0
0059D98C  50                        PUSH EAX
0059D98D  8D 86 E4 1A 00 00         LEA EAX,[ESI + 0x1ae4]
0059D993  C7 85 34 F7 FF FF D2 00 00 00  MOV dword ptr [EBP + 0xfffff734],0xd2
0059D99D  C7 85 38 F7 FF FF DD 00 00 00  MOV dword ptr [EBP + 0xfffff738],0xdd
0059D9A7  C7 85 3C F7 FF FF 7C 01 00 00  MOV dword ptr [EBP + 0xfffff73c],0x17c
0059D9B1  C7 85 40 F7 FF FF 4B 00 00 00  MOV dword ptr [EBP + 0xfffff740],0x4b
0059D9BB  C7 85 7C F7 FF FF 81 69 00 00  MOV dword ptr [EBP + 0xfffff77c],0x6981
0059D9C5  8B 11                     MOV EDX,dword ptr [ECX]
0059D9C7  6A 00                     PUSH 0x0
0059D9C9  50                        PUSH EAX
0059D9CA  6A 06                     PUSH 0x6
0059D9CC  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059D9CF  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059D9D2  C7 46 2D 61 00 00 00      MOV dword ptr [ESI + 0x2d],0x61
0059D9D9  51                        PUSH ECX
0059D9DA  6A 00                     PUSH 0x0
0059D9DC  6A 0F                     PUSH 0xf
0059D9DE  8B CE                     MOV ECX,ESI
0059D9E0  C7 46 35 00 00 00 00      MOV dword ptr [ESI + 0x35],0x0
0059D9E7  E8 94 86 14 00            CALL 0x006e6080
0059D9EC  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0059D9EF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059D9F5  5F                        POP EDI
0059D9F6  5E                        POP ESI
0059D9F7  5B                        POP EBX
0059D9F8  8B E5                     MOV ESP,EBP
0059D9FA  5D                        POP EBP
0059D9FB  C3                        RET
LAB_0059d9fc:
0059D9FC  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0059D9FF  68 3C C3 7C 00            PUSH 0x7cc33c
0059DA04  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059DA09  56                        PUSH ESI
0059DA0A  6A 00                     PUSH 0x0
0059DA0C  68 9C 06 00 00            PUSH 0x69c
0059DA11  68 70 BF 7C 00            PUSH 0x7cbf70
0059DA16  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059DA1B  E8 B0 FA 10 00            CALL 0x006ad4d0
0059DA20  83 C4 18                  ADD ESP,0x18
0059DA23  85 C0                     TEST EAX,EAX
0059DA25  74 01                     JZ 0x0059da28
0059DA27  CC                        INT3
LAB_0059da28:
0059DA28  68 9C 06 00 00            PUSH 0x69c
0059DA2D  68 70 BF 7C 00            PUSH 0x7cbf70
0059DA32  6A 00                     PUSH 0x0
0059DA34  56                        PUSH ESI
0059DA35  E8 06 84 10 00            CALL 0x006a5e40
LAB_0059da3a:
0059DA3A  5F                        POP EDI
0059DA3B  5E                        POP ESI
0059DA3C  5B                        POP EBX
0059DA3D  8B E5                     MOV ESP,EBP
0059DA3F  5D                        POP EBP
0059DA40  C3                        RET
