FUN_0069f660:
0069F660  55                        PUSH EBP
0069F661  8B EC                     MOV EBP,ESP
0069F663  83 EC 10                  SUB ESP,0x10
0069F666  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0069F669  53                        PUSH EBX
0069F66A  56                        PUSH ESI
0069F66B  57                        PUSH EDI
0069F66C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0069F66F  8B C1                     MOV EAX,ECX
0069F671  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0069F674  2B C7                     SUB EAX,EDI
0069F676  99                        CDQ
0069F677  8B D8                     MOV EBX,EAX
0069F679  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0069F67C  33 DA                     XOR EBX,EDX
0069F67E  2B C6                     SUB EAX,ESI
0069F680  2B DA                     SUB EBX,EDX
0069F682  99                        CDQ
0069F683  33 C2                     XOR EAX,EDX
0069F685  2B C2                     SUB EAX,EDX
0069F687  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0069F68A  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
0069F68D  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0069F690  8D 14 1B                  LEA EDX,[EBX + EBX*0x1]
0069F693  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0069F696  33 D2                     XOR EDX,EDX
0069F698  3B CF                     CMP ECX,EDI
0069F69A  0F 9E C2                  SETLE DL
0069F69D  4A                        DEC EDX
0069F69E  33 C9                     XOR ECX,ECX
0069F6A0  83 E2 02                  AND EDX,0x2
0069F6A3  4A                        DEC EDX
0069F6A4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0069F6A7  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0069F6AA  3B D6                     CMP EDX,ESI
0069F6AC  0F 9E C1                  SETLE CL
0069F6AF  49                        DEC ECX
0069F6B0  03 C3                     ADD EAX,EBX
0069F6B2  83 E1 02                  AND ECX,0x2
0069F6B5  8D 14 85 08 00 00 00      LEA EDX,[EAX*0x4 + 0x8]
0069F6BC  49                        DEC ECX
0069F6BD  52                        PUSH EDX
0069F6BE  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0069F6C1  E8 AA B5 00 00            CALL 0x006aac70
0069F6C6  8B C8                     MOV ECX,EAX
0069F6C8  85 C9                     TEST ECX,ECX
0069F6CA  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0069F6CD  75 09                     JNZ 0x0069f6d8
0069F6CF  5F                        POP EDI
0069F6D0  5E                        POP ESI
0069F6D1  5B                        POP EBX
0069F6D2  8B E5                     MOV ESP,EBP
0069F6D4  5D                        POP EBP
0069F6D5  C2 18 00                  RET 0x18
LAB_0069f6d8:
0069F6D8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0069F6DB  33 D2                     XOR EDX,EDX
0069F6DD  3B D8                     CMP EBX,EAX
0069F6DF  7C 3F                     JL 0x0069f720
0069F6E1  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0069F6E4  2B C3                     SUB EAX,EBX
LAB_0069f6e6:
0069F6E6  3B 7D 14                  CMP EDI,dword ptr [EBP + 0x14]
0069F6E9  75 05                     JNZ 0x0069f6f0
0069F6EB  3B 75 18                  CMP ESI,dword ptr [EBP + 0x18]
0069F6EE  74 69                     JZ 0x0069f759
LAB_0069f6f0:
0069F6F0  66 89 39                  MOV word ptr [ECX],DI
0069F6F3  66 89 71 02               MOV word ptr [ECX + 0x2],SI
0069F6F7  42                        INC EDX
0069F6F8  83 C1 04                  ADD ECX,0x4
0069F6FB  85 C0                     TEST EAX,EAX
0069F6FD  7C 15                     JL 0x0069f714
0069F6FF  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0069F702  66 89 39                  MOV word ptr [ECX],DI
0069F705  2B C3                     SUB EAX,EBX
0069F707  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0069F70A  03 F3                     ADD ESI,EBX
0069F70C  42                        INC EDX
0069F70D  66 89 71 02               MOV word ptr [ECX + 0x2],SI
0069F711  83 C1 04                  ADD ECX,0x4
LAB_0069f714:
0069F714  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0069F717  03 C3                     ADD EAX,EBX
0069F719  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0069F71C  03 FB                     ADD EDI,EBX
0069F71E  EB C6                     JMP 0x0069f6e6
LAB_0069f720:
0069F720  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0069F723  2B D8                     SUB EBX,EAX
0069F725  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_0069f728:
0069F728  3B 7D 14                  CMP EDI,dword ptr [EBP + 0x14]
0069F72B  75 05                     JNZ 0x0069f732
0069F72D  3B 75 18                  CMP ESI,dword ptr [EBP + 0x18]
0069F730  74 27                     JZ 0x0069f759
LAB_0069f732:
0069F732  66 89 39                  MOV word ptr [ECX],DI
0069F735  66 89 71 02               MOV word ptr [ECX + 0x2],SI
0069F739  42                        INC EDX
0069F73A  83 C1 04                  ADD ECX,0x4
0069F73D  85 DB                     TEST EBX,EBX
0069F73F  7C 11                     JL 0x0069f752
0069F741  03 7D FC                  ADD EDI,dword ptr [EBP + -0x4]
0069F744  2B 5D 10                  SUB EBX,dword ptr [EBP + 0x10]
0069F747  42                        INC EDX
0069F748  66 89 39                  MOV word ptr [ECX],DI
0069F74B  66 89 71 02               MOV word ptr [ECX + 0x2],SI
0069F74F  83 C1 04                  ADD ECX,0x4
LAB_0069f752:
0069F752  03 D8                     ADD EBX,EAX
0069F754  03 75 F8                  ADD ESI,dword ptr [EBP + -0x8]
0069F757  EB CF                     JMP 0x0069f728
LAB_0069f759:
0069F759  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069F75C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0069F75F  66 89 3C 90               MOV word ptr [EAX + EDX*0x4],DI
0069F763  66 89 74 90 02            MOV word ptr [EAX + EDX*0x4 + 0x2],SI
0069F768  42                        INC EDX
0069F769  85 D2                     TEST EDX,EDX
0069F76B  89 11                     MOV dword ptr [ECX],EDX
0069F76D  74 21                     JZ 0x0069f790
0069F76F  8B DA                     MOV EBX,EDX
0069F771  81 E3 01 00 00 80         AND EBX,0x80000001
0069F777  79 05                     JNS 0x0069f77e
0069F779  4B                        DEC EBX
0069F77A  83 CB FE                  OR EBX,0xfffffffe
0069F77D  43                        INC EBX
LAB_0069f77e:
0069F77E  75 10                     JNZ 0x0069f790
0069F780  66 89 3C 90               MOV word ptr [EAX + EDX*0x4],DI
0069F784  8B 11                     MOV EDX,dword ptr [ECX]
0069F786  66 89 74 90 02            MOV word ptr [EAX + EDX*0x4 + 0x2],SI
0069F78B  8B 11                     MOV EDX,dword ptr [ECX]
0069F78D  42                        INC EDX
0069F78E  89 11                     MOV dword ptr [ECX],EDX
LAB_0069f790:
0069F790  5F                        POP EDI
0069F791  5E                        POP ESI
0069F792  5B                        POP EBX
0069F793  8B E5                     MOV ESP,EBP
0069F795  5D                        POP EBP
0069F796  C2 18 00                  RET 0x18
