STPlaySystemC::GetMessage:
0054E4F0  55                        PUSH EBP
0054E4F1  8B EC                     MOV EBP,ESP
0054E4F3  81 EC B4 02 00 00         SUB ESP,0x2b4
0054E4F9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054E4FC  53                        PUSH EBX
0054E4FD  56                        PUSH ESI
0054E4FE  57                        PUSH EDI
0054E4FF  50                        PUSH EAX
0054E500  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0054E503  E8 F8 79 19 00            CALL 0x006e5f00
0054E508  3D FF FF 00 00            CMP EAX,0xffff
0054E50D  0F 84 40 03 00 00         JZ 0x0054e853
0054E513  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0054E519  33 F6                     XOR ESI,ESI
0054E51B  8D 45 98                  LEA EAX,[EBP + -0x68]
0054E51E  8D 55 94                  LEA EDX,[EBP + -0x6c]
0054E521  56                        PUSH ESI
0054E522  50                        PUSH EAX
0054E523  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
0054E526  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054E52C  E8 BF F2 1D 00            CALL 0x0072d7f0
0054E531  83 C4 08                  ADD ESP,0x8
0054E534  3B C6                     CMP EAX,ESI
0054E536  0F 85 EB 02 00 00         JNZ 0x0054e827
0054E53C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0054E53F  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
0054E542  83 F8 08                  CMP EAX,0x8
0054E545  0F 84 B9 00 00 00         JZ 0x0054e604
0054E54B  3D FF 44 00 00            CMP EAX,0x44ff
0054E550  0F 85 BE 02 00 00         JNZ 0x0054e814
0054E556  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0054E55B  33 DB                     XOR EBX,EBX
0054E55D  84 C0                     TEST AL,AL
0054E55F  89 35 88 87 80 00         MOV dword ptr [0x00808788],ESI
0054E565  0F 86 A9 02 00 00         JBE 0x0054e814
0054E56B  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0054E56E  BF F6 8A 80 00            MOV EDI,0x808af6
LAB_0054e573:
0054E573  8B 57 FA                  MOV EDX,dword ptr [EDI + -0x6]
0054E576  8B 86 F4 00 00 00         MOV EAX,dword ptr [ESI + 0xf4]
0054E57C  3B D0                     CMP EDX,EAX
0054E57E  75 5F                     JNZ 0x0054e5df
0054E580  80 3F 00                  CMP byte ptr [EDI],0x0
0054E583  74 5A                     JZ 0x0054e5df
0054E585  A1 64 17 81 00            MOV EAX,[0x00811764]
0054E58A  6A 01                     PUSH 0x1
0054E58C  50                        PUSH EAX
0054E58D  C6 07 00                  MOV byte ptr [EDI],0x0
0054E590  E8 6B 7F 16 00            CALL 0x006b6500
0054E595  8B 8E F4 00 00 00         MOV ECX,dword ptr [ESI + 0xf4]
0054E59B  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
0054E5A1  6A FF                     PUSH -0x1
0054E5A3  6A 00                     PUSH 0x0
0054E5A5  6A 00                     PUSH 0x0
0054E5A7  6A 00                     PUSH 0x0
0054E5A9  6A 37                     PUSH 0x37
0054E5AB  51                        PUSH ECX
0054E5AC  52                        PUSH EDX
0054E5AD  E8 AE 6D 1C 00            CALL 0x00715360
0054E5B2  A1 3C 73 80 00            MOV EAX,[0x0080733c]
0054E5B7  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
0054E5BD  83 C4 1C                  ADD ESP,0x1c
0054E5C0  50                        PUSH EAX
0054E5C1  51                        PUSH ECX
0054E5C2  E8 39 7F 16 00            CALL 0x006b6500
0054E5C7  8B 96 F4 00 00 00         MOV EDX,dword ptr [ESI + 0xf4]
0054E5CD  8B CE                     MOV ECX,ESI
0054E5CF  52                        PUSH EDX
0054E5D0  E8 9B 2D EB FF            CALL 0x00401370
0054E5D5  C7 86 F4 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xf4],0x0
LAB_0054e5df:
0054E5DF  33 C0                     XOR EAX,EAX
0054E5E1  43                        INC EBX
0054E5E2  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0054E5E7  81 C7 9C 00 00 00         ADD EDI,0x9c
0054E5ED  3B D8                     CMP EBX,EAX
0054E5EF  72 82                     JC 0x0054e573
0054E5F1  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
0054E5F4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054E5F9  33 C0                     XOR EAX,EAX
0054E5FB  5F                        POP EDI
0054E5FC  5E                        POP ESI
0054E5FD  5B                        POP EBX
0054E5FE  8B E5                     MOV ESP,EBP
0054E600  5D                        POP EBP
0054E601  C2 04 00                  RET 0x4
LAB_0054e604:
0054E604  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0054E60A  8D 85 54 FF FF FF         LEA EAX,[EBP + 0xffffff54]
0054E610  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
0054E616  56                        PUSH ESI
0054E617  50                        PUSH EAX
0054E618  89 8D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],ECX
0054E61E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054E624  E8 C7 F1 1D 00            CALL 0x0072d7f0
0054E629  83 C4 08                  ADD ESP,0x8
0054E62C  3B C6                     CMP EAX,ESI
0054E62E  0F 85 13 01 00 00         JNZ 0x0054e747
0054E634  39 35 58 2A 80 00         CMP dword ptr [0x00802a58],ESI
0054E63A  0F 84 8F 00 00 00         JZ 0x0054e6cf
0054E640  8B 3D B0 83 7C 00         MOV EDI,dword ptr [0x007c83b0]
0054E646  83 C9 FF                  OR ECX,0xffffffff
0054E649  33 C0                     XOR EAX,EAX
0054E64B  8D 95 4D FD FF FF         LEA EDX,[EBP + 0xfffffd4d]
0054E651  F2 AE                     SCASB.REPNE ES:EDI
0054E653  F7 D1                     NOT ECX
0054E655  2B F9                     SUB EDI,ECX
0054E657  C6 85 4C FD FF FF 0C      MOV byte ptr [EBP + 0xfffffd4c],0xc
0054E65E  8B C1                     MOV EAX,ECX
0054E660  8B F7                     MOV ESI,EDI
0054E662  8B FA                     MOV EDI,EDX
0054E664  8B 1D 54 67 80 00         MOV EBX,dword ptr [0x00806754]
0054E66A  C1 E9 02                  SHR ECX,0x2
0054E66D  F3 A5                     MOVSD.REP ES:EDI,ESI
0054E66F  8B C8                     MOV ECX,EAX
0054E671  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0054E678  83 E1 03                  AND ECX,0x3
0054E67B  F3 A4                     MOVSB.REP ES:EDI,ESI
0054E67D  8D 8D 4C FD FF FF         LEA ECX,[EBP + 0xfffffd4c]
0054E683  51                        PUSH ECX
0054E684  68 10 2D 6F 00            PUSH 0x6f2d10
0054E689  8B CB                     MOV ECX,EBX
0054E68B  E8 20 2C 1A 00            CALL 0x006f12b0
0054E690  8B CB                     MOV ECX,EBX
0054E692  E8 F9 40 1A 00            CALL 0x006f2790
0054E697  85 C0                     TEST EAX,EAX
0054E699  74 12                     JZ 0x0054e6ad
LAB_0054e69b:
0054E69B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0054E69E  8B CB                     MOV ECX,EBX
0054E6A0  42                        INC EDX
0054E6A1  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0054E6A4  E8 E7 40 1A 00            CALL 0x006f2790
0054E6A9  85 C0                     TEST EAX,EAX
0054E6AB  75 EE                     JNZ 0x0054e69b
LAB_0054e6ad:
0054E6AD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0054E6B0  A1 18 76 80 00            MOV EAX,[0x00807618]
0054E6B5  52                        PUSH EDX
0054E6B6  50                        PUSH EAX
0054E6B7  68 38 4A 00 00            PUSH 0x4a38
0054E6BC  E8 7F 1A 16 00            CALL 0x006b0140
0054E6C1  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
0054E6C7  50                        PUSH EAX
0054E6C8  6A 00                     PUSH 0x0
0054E6CA  E8 BC 66 EB FF            CALL 0x00404d8b
LAB_0054e6cf:
0054E6CF  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0054E6D2  8B 0D B0 83 7C 00         MOV ECX,dword ptr [0x007c83b0]
0054E6D8  8B 15 54 67 80 00         MOV EDX,dword ptr [0x00806754]
0054E6DE  33 F6                     XOR ESI,ESI
0054E6E0  56                        PUSH ESI
0054E6E1  53                        PUSH EBX
0054E6E2  68 35 35 40 00            PUSH 0x403535
0054E6E7  51                        PUSH ECX
0054E6E8  52                        PUSH EDX
0054E6E9  89 35 3C 2A 80 00         MOV dword ptr [0x00802a3c],ESI
0054E6EF  E8 4C 47 1A 00            CALL 0x006f2e40
0054E6F4  A1 18 76 80 00            MOV EAX,[0x00807618]
0054E6F9  83 C4 14                  ADD ESP,0x14
0054E6FC  50                        PUSH EAX
0054E6FD  68 39 4A 00 00            PUSH 0x4a39
0054E702  E8 39 1A 16 00            CALL 0x006b0140
0054E707  8B 0D 3C 2A 80 00         MOV ECX,dword ptr [0x00802a3c]
0054E70D  50                        PUSH EAX
0054E70E  51                        PUSH ECX
0054E70F  68 64 28 7C 00            PUSH 0x7c2864
0054E714  68 3A F3 80 00            PUSH 0x80f33a
0054E719  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0054E71F  8B 0D 58 2A 80 00         MOV ECX,dword ptr [0x00802a58]
0054E725  83 C4 10                  ADD ESP,0x10
0054E728  3B CE                     CMP ECX,ESI
0054E72A  74 0D                     JZ 0x0054e739
0054E72C  68 3A F3 80 00            PUSH 0x80f33a
0054E731  56                        PUSH ESI
0054E732  6A 02                     PUSH 0x2
0054E734  E8 39 4D EB FF            CALL 0x00403472
LAB_0054e739:
0054E739  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
0054E73F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054E745  EB 20                     JMP 0x0054e767
LAB_0054e747:
0054E747  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
0054E74D  68 2F 04 00 00            PUSH 0x42f
0054E752  68 30 84 7C 00            PUSH 0x7c8430
0054E757  56                        PUSH ESI
0054E758  50                        PUSH EAX
0054E759  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054E75F  E8 DC 76 15 00            CALL 0x006a5e40
0054E764  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_0054e767:
0054E767  8B 13                     MOV EDX,dword ptr [EBX]
0054E769  B9 08 00 00 00            MOV ECX,0x8
0054E76E  33 C0                     XOR EAX,EAX
0054E770  8D 7D D8                  LEA EDI,[EBP + -0x28]
0054E773  F3 AB                     STOSD.REP ES:EDI
0054E775  8D 45 D8                  LEA EAX,[EBP + -0x28]
0054E778  8B CB                     MOV ECX,EBX
0054E77A  50                        PUSH EAX
0054E77B  C7 45 E4 0F 00 00 00      MOV dword ptr [EBP + -0x1c],0xf
0054E782  C7 45 E8 11 01 00 00      MOV dword ptr [EBP + -0x18],0x111
0054E789  FF 52 18                  CALL dword ptr [EDX + 0x18]
0054E78C  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
0054E793  75 6A                     JNZ 0x0054e7ff
0054E795  C6 43 38 01               MOV byte ptr [EBX + 0x38],0x1
0054E799  A1 64 17 81 00            MOV EAX,[0x00811764]
0054E79E  3B C6                     CMP EAX,ESI
0054E7A0  74 12                     JZ 0x0054e7b4
0054E7A2  8B 0D 3C 73 80 00         MOV ECX,dword ptr [0x0080733c]
0054E7A8  51                        PUSH ECX
0054E7A9  50                        PUSH EAX
0054E7AA  E8 51 7D 16 00            CALL 0x006b6500
0054E7AF  A1 64 17 81 00            MOV EAX,[0x00811764]
LAB_0054e7b4:
0054E7B4  8A 0D 7E 87 80 00         MOV CL,byte ptr [0x0080877e]
0054E7BA  84 C9                     TEST CL,CL
0054E7BC  74 2F                     JZ 0x0054e7ed
0054E7BE  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0054E7C3  84 C0                     TEST AL,AL
0054E7C5  76 38                     JBE 0x0054e7ff
0054E7C7  BF F8 8A 80 00            MOV EDI,0x808af8
LAB_0054e7cc:
0054E7CC  B9 20 76 80 00            MOV ECX,0x807620
0054E7D1  E8 DA 69 19 00            CALL 0x006e51b0
0054E7D6  33 D2                     XOR EDX,EDX
0054E7D8  89 07                     MOV dword ptr [EDI],EAX
0054E7DA  8A 15 AF 8A 80 00         MOV DL,byte ptr [0x00808aaf]
0054E7E0  46                        INC ESI
0054E7E1  81 C7 9C 00 00 00         ADD EDI,0x9c
0054E7E7  3B F2                     CMP ESI,EDX
0054E7E9  72 E1                     JC 0x0054e7cc
0054E7EB  EB 12                     JMP 0x0054e7ff
LAB_0054e7ed:
0054E7ED  6A FF                     PUSH -0x1
0054E7EF  56                        PUSH ESI
0054E7F0  56                        PUSH ESI
0054E7F1  56                        PUSH ESI
0054E7F2  6A 2E                     PUSH 0x2e
0054E7F4  6A 01                     PUSH 0x1
0054E7F6  50                        PUSH EAX
0054E7F7  E8 64 6B 1C 00            CALL 0x00715360
0054E7FC  83 C4 1C                  ADD ESP,0x1c
LAB_0054e7ff:
0054E7FF  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0054E805  89 83 BC 00 00 00         MOV dword ptr [EBX + 0xbc],EAX
0054E80B  89 43 7F                  MOV dword ptr [EBX + 0x7f],EAX
0054E80E  89 83 83 00 00 00         MOV dword ptr [EBX + 0x83],EAX
LAB_0054e814:
0054E814  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
0054E817  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0054E81C  33 C0                     XOR EAX,EAX
0054E81E  5F                        POP EDI
0054E81F  5E                        POP ESI
0054E820  5B                        POP EBX
0054E821  8B E5                     MOV ESP,EBP
0054E823  5D                        POP EBP
0054E824  C2 04 00                  RET 0x4
LAB_0054e827:
0054E827  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
0054E82A  68 54 85 7C 00            PUSH 0x7c8554
0054E82F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054E834  50                        PUSH EAX
0054E835  56                        PUSH ESI
0054E836  68 63 04 00 00            PUSH 0x463
0054E83B  68 30 84 7C 00            PUSH 0x7c8430
0054E840  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054E846  E8 85 EC 15 00            CALL 0x006ad4d0
0054E84B  83 C4 18                  ADD ESP,0x18
0054E84E  85 C0                     TEST EAX,EAX
0054E850  74 01                     JZ 0x0054e853
0054E852  CC                        INT3
LAB_0054e853:
0054E853  5F                        POP EDI
0054E854  5E                        POP ESI
0054E855  B8 FF FF 00 00            MOV EAX,0xffff
0054E85A  5B                        POP EBX
0054E85B  8B E5                     MOV ESP,EBP
0054E85D  5D                        POP EBP
0054E85E  C2 04 00                  RET 0x4
