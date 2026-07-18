FUN_0051d360:
0051D360  55                        PUSH EBP
0051D361  8B EC                     MOV EBP,ESP
0051D363  83 EC 4C                  SUB ESP,0x4c
0051D366  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0051D36B  53                        PUSH EBX
0051D36C  56                        PUSH ESI
0051D36D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0051D370  33 DB                     XOR EBX,EBX
0051D372  57                        PUSH EDI
0051D373  8D 55 B8                  LEA EDX,[EBP + -0x48]
0051D376  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0051D379  53                        PUSH EBX
0051D37A  52                        PUSH EDX
0051D37B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0051D37E  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0051D381  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0051D387  E8 64 04 21 00            CALL 0x0072d7f0
0051D38C  8B F0                     MOV ESI,EAX
0051D38E  83 C4 08                  ADD ESP,0x8
0051D391  3B F3                     CMP ESI,EBX
0051D393  0F 85 F8 00 00 00         JNZ 0x0051d491
0051D399  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
0051D39C  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0051D39F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0051D3A2  3A C3                     CMP AL,BL
0051D3A4  0F 85 87 00 00 00         JNZ 0x0051d431
0051D3AA  8A 86 A1 01 00 00         MOV AL,byte ptr [ESI + 0x1a1]
0051D3B0  3A C3                     CMP AL,BL
0051D3B2  74 16                     JZ 0x0051d3ca
0051D3B4  3C 06                     CMP AL,0x6
0051D3B6  74 12                     JZ 0x0051d3ca
0051D3B8  3C 0A                     CMP AL,0xa
0051D3BA  74 0E                     JZ 0x0051d3ca
0051D3BC  88 9E A2 01 00 00         MOV byte ptr [ESI + 0x1a2],BL
0051D3C2  89 9E AB 01 00 00         MOV dword ptr [ESI + 0x1ab],EBX
0051D3C8  EB 12                     JMP 0x0051d3dc
LAB_0051d3ca:
0051D3CA  88 86 A2 01 00 00         MOV byte ptr [ESI + 0x1a2],AL
0051D3D0  8B 86 A3 01 00 00         MOV EAX,dword ptr [ESI + 0x1a3]
0051D3D6  89 86 AB 01 00 00         MOV dword ptr [ESI + 0x1ab],EAX
LAB_0051d3dc:
0051D3DC  8B 86 78 01 00 00         MOV EAX,dword ptr [ESI + 0x178]
0051D3E2  C6 86 A1 01 00 00 0C      MOV byte ptr [ESI + 0x1a1],0xc
0051D3E9  3B C3                     CMP EAX,EBX
0051D3EB  89 BE A3 01 00 00         MOV dword ptr [ESI + 0x1a3],EDI
0051D3F1  89 9E A7 01 00 00         MOV dword ptr [ESI + 0x1a7],EBX
0051D3F7  66 C7 86 AF 01 00 00 23 00  MOV word ptr [ESI + 0x1af],0x23
0051D400  66 C7 86 B1 01 00 00 05 00  MOV word ptr [ESI + 0x1b1],0x5
0051D409  74 26                     JZ 0x0051d431
0051D40B  C7 46 28 02 42 00 00      MOV dword ptr [ESI + 0x28],0x4202
0051D412  66 89 5E 2C               MOV word ptr [ESI + 0x2c],BX
0051D416  66 C7 46 2E 02 00         MOV word ptr [ESI + 0x2e],0x2
0051D41C  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
0051D41F  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0051D425  3B CB                     CMP ECX,EBX
0051D427  74 08                     JZ 0x0051d431
0051D429  8B 11                     MOV EDX,dword ptr [ECX]
0051D42B  8D 46 18                  LEA EAX,[ESI + 0x18]
0051D42E  50                        PUSH EAX
0051D42F  FF 12                     CALL dword ptr [EDX]
LAB_0051d431:
0051D431  53                        PUSH EBX
0051D432  53                        PUSH EBX
0051D433  57                        PUSH EDI
0051D434  E8 4B 62 EE FF            CALL 0x00403684
0051D439  83 C4 0C                  ADD ESP,0xc
0051D43C  8B CE                     MOV ECX,ESI
0051D43E  50                        PUSH EAX
0051D43F  53                        PUSH EBX
0051D440  68 F9 55 00 00            PUSH 0x55f9
0051D445  E8 AF 6A EE FF            CALL 0x00403ef9
0051D44A  53                        PUSH EBX
0051D44B  53                        PUSH EBX
0051D44C  8D 4D FC                  LEA ECX,[EBP + -0x4]
0051D44F  57                        PUSH EDI
0051D450  51                        PUSH ECX
0051D451  8B CE                     MOV ECX,ESI
0051D453  E8 20 69 EE FF            CALL 0x00403d78
0051D458  6A 02                     PUSH 0x2
0051D45A  53                        PUSH EBX
0051D45B  57                        PUSH EDI
0051D45C  E8 23 62 EE FF            CALL 0x00403684
0051D461  83 C4 0C                  ADD ESP,0xc
0051D464  8D 55 FC                  LEA EDX,[EBP + -0x4]
0051D467  8B CE                     MOV ECX,ESI
0051D469  50                        PUSH EAX
0051D46A  52                        PUSH EDX
0051D46B  E8 3B 59 EE FF            CALL 0x00402dab
0051D470  53                        PUSH EBX
0051D471  57                        PUSH EDI
0051D472  8D 45 FC                  LEA EAX,[EBP + -0x4]
0051D475  6A 0C                     PUSH 0xc
0051D477  50                        PUSH EAX
0051D478  8B CE                     MOV ECX,ESI
0051D47A  E8 F0 7B EE FF            CALL 0x0040506f
0051D47F  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0051D482  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0051D488  5F                        POP EDI
0051D489  5E                        POP ESI
0051D48A  5B                        POP EBX
0051D48B  8B E5                     MOV ESP,EBP
0051D48D  5D                        POP EBP
0051D48E  C2 08 00                  RET 0x8
LAB_0051d491:
0051D491  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0051D494  68 70 3D 7C 00            PUSH 0x7c3d70
0051D499  68 CC 4C 7A 00            PUSH 0x7a4ccc
0051D49E  56                        PUSH ESI
0051D49F  53                        PUSH EBX
0051D4A0  68 3F 09 00 00            PUSH 0x93f
0051D4A5  68 3C 38 7C 00            PUSH 0x7c383c
0051D4AA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051D4B0  E8 1B 00 19 00            CALL 0x006ad4d0
0051D4B5  83 C4 18                  ADD ESP,0x18
0051D4B8  85 C0                     TEST EAX,EAX
0051D4BA  74 01                     JZ 0x0051d4bd
0051D4BC  CC                        INT3
LAB_0051d4bd:
0051D4BD  68 3F 09 00 00            PUSH 0x93f
0051D4C2  68 3C 38 7C 00            PUSH 0x7c383c
0051D4C7  53                        PUSH EBX
0051D4C8  56                        PUSH ESI
0051D4C9  E8 72 89 18 00            CALL 0x006a5e40
0051D4CE  5F                        POP EDI
0051D4CF  5E                        POP ESI
0051D4D0  5B                        POP EBX
0051D4D1  8B E5                     MOV ESP,EBP
0051D4D3  5D                        POP EBP
0051D4D4  C2 08 00                  RET 0x8
