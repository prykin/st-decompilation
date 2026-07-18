FUN_0073e370:
0073E370  55                        PUSH EBP
0073E371  8B EC                     MOV EBP,ESP
0073E373  81 EC 20 04 00 00         SUB ESP,0x420
0073E379  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073E37C  3B 05 DC A2 85 00         CMP EAX,dword ptr [0x0085a2dc]
0073E382  73 1F                     JNC 0x0073e3a3
0073E384  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073E387  C1 F9 05                  SAR ECX,0x5
0073E38A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073E38D  83 E2 1F                  AND EDX,0x1f
0073E390  8B 04 8D A0 A1 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x85a1a0]
0073E397  0F BE 4C D0 04            MOVSX ECX,byte ptr [EAX + EDX*0x8 + 0x4]
0073E39C  83 E1 01                  AND ECX,0x1
0073E39F  85 C9                     TEST ECX,ECX
0073E3A1  75 1C                     JNZ 0x0073e3bf
LAB_0073e3a3:
0073E3A3  C7 05 48 71 85 00 09 00 00 00  MOV dword ptr [0x00857148],0x9
0073E3AD  C7 05 4C 71 85 00 00 00 00 00  MOV dword ptr [0x0085714c],0x0
0073E3B7  83 C8 FF                  OR EAX,0xffffffff
0073E3BA  E9 4F 02 00 00            JMP 0x0073e60e
LAB_0073e3bf:
0073E3BF  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0073E3C6  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0073E3C9  89 95 E0 FB FF FF         MOV dword ptr [EBP + 0xfffffbe0],EDX
0073E3CF  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
0073E3D3  75 07                     JNZ 0x0073e3dc
0073E3D5  33 C0                     XOR EAX,EAX
0073E3D7  E9 32 02 00 00            JMP 0x0073e60e
LAB_0073e3dc:
0073E3DC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073E3DF  C1 F8 05                  SAR EAX,0x5
0073E3E2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073E3E5  83 E1 1F                  AND ECX,0x1f
0073E3E8  8B 14 85 A0 A1 85 00      MOV EDX,dword ptr [EAX*0x4 + 0x85a1a0]
0073E3EF  0F BE 44 CA 04            MOVSX EAX,byte ptr [EDX + ECX*0x8 + 0x4]
0073E3F4  83 E0 20                  AND EAX,0x20
0073E3F7  85 C0                     TEST EAX,EAX
0073E3F9  74 10                     JZ 0x0073e40b
0073E3FB  6A 02                     PUSH 0x2
0073E3FD  6A 00                     PUSH 0x0
0073E3FF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073E402  51                        PUSH ECX
0073E403  E8 48 49 00 00            CALL 0x00742d50
0073E408  83 C4 0C                  ADD ESP,0xc
LAB_0073e40b:
0073E40B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073E40E  C1 FA 05                  SAR EDX,0x5
0073E411  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073E414  83 E0 1F                  AND EAX,0x1f
0073E417  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
0073E41E  0F BE 54 C1 04            MOVSX EDX,byte ptr [ECX + EAX*0x8 + 0x4]
0073E423  81 E2 80 00 00 00         AND EDX,0x80
0073E429  85 D2                     TEST EDX,EDX
0073E42B  0F 84 08 01 00 00         JZ 0x0073e539
0073E431  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0073E434  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073E437  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_0073e43e:
0073E43E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073E441  2B 4D 0C                  SUB ECX,dword ptr [EBP + 0xc]
0073E444  3B 4D 10                  CMP ECX,dword ptr [EBP + 0x10]
0073E447  0F 83 EA 00 00 00         JNC 0x0073e537
0073E44D  8D 95 EC FB FF FF         LEA EDX,[EBP + 0xfffffbec]
0073E453  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0073e456:
0073E456  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073E459  8D 8D EC FB FF FF         LEA ECX,[EBP + 0xfffffbec]
0073E45F  2B C1                     SUB EAX,ECX
0073E461  3D 00 04 00 00            CMP EAX,0x400
0073E466  7D 5F                     JGE 0x0073e4c7
0073E468  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073E46B  2B 55 0C                  SUB EDX,dword ptr [EBP + 0xc]
0073E46E  3B 55 10                  CMP EDX,dword ptr [EBP + 0x10]
0073E471  73 54                     JNC 0x0073e4c7
0073E473  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073E476  8A 08                     MOV CL,byte ptr [EAX]
0073E478  88 8D E4 FB FF FF         MOV byte ptr [EBP + 0xfffffbe4],CL
0073E47E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073E481  83 C2 01                  ADD EDX,0x1
0073E484  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0073E487  0F BE 85 E4 FB FF FF      MOVSX EAX,byte ptr [EBP + 0xfffffbe4]
0073E48E  83 F8 0A                  CMP EAX,0xa
0073E491  75 1E                     JNZ 0x0073e4b1
0073E493  8B 8D E0 FB FF FF         MOV ECX,dword ptr [EBP + 0xfffffbe0]
0073E499  83 C1 01                  ADD ECX,0x1
0073E49C  89 8D E0 FB FF FF         MOV dword ptr [EBP + 0xfffffbe0],ECX
0073E4A2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0073E4A5  C6 02 0D                  MOV byte ptr [EDX],0xd
0073E4A8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073E4AB  83 C0 01                  ADD EAX,0x1
0073E4AE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0073e4b1:
0073E4B1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073E4B4  8A 95 E4 FB FF FF         MOV DL,byte ptr [EBP + 0xfffffbe4]
0073E4BA  88 11                     MOV byte ptr [ECX],DL
0073E4BC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0073E4BF  83 C0 01                  ADD EAX,0x1
0073E4C2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0073E4C5  EB 8F                     JMP 0x0073e456
LAB_0073e4c7:
0073E4C7  6A 00                     PUSH 0x0
0073E4C9  8D 8D E8 FB FF FF         LEA ECX,[EBP + 0xfffffbe8]
0073E4CF  51                        PUSH ECX
0073E4D0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0073E4D3  8D 85 EC FB FF FF         LEA EAX,[EBP + 0xfffffbec]
0073E4D9  2B D0                     SUB EDX,EAX
0073E4DB  52                        PUSH EDX
0073E4DC  8D 8D EC FB FF FF         LEA ECX,[EBP + 0xfffffbec]
0073E4E2  51                        PUSH ECX
0073E4E3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073E4E6  C1 FA 05                  SAR EDX,0x5
0073E4E9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073E4EC  83 E0 1F                  AND EAX,0x1f
0073E4EF  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
0073E4F6  8B 14 C1                  MOV EDX,dword ptr [ECX + EAX*0x8]
0073E4F9  52                        PUSH EDX
0073E4FA  FF 15 90 BC 85 00         CALL dword ptr [0x0085bc90]
0073E500  85 C0                     TEST EAX,EAX
0073E502  74 23                     JZ 0x0073e527
0073E504  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0073E507  03 85 E8 FB FF FF         ADD EAX,dword ptr [EBP + 0xfffffbe8]
0073E50D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0073E510  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073E513  8D 95 EC FB FF FF         LEA EDX,[EBP + 0xfffffbec]
0073E519  2B CA                     SUB ECX,EDX
0073E51B  39 8D E8 FB FF FF         CMP dword ptr [EBP + 0xfffffbe8],ECX
0073E521  7D 02                     JGE 0x0073e525
0073E523  EB 12                     JMP 0x0073e537
LAB_0073e525:
0073E525  EB 0B                     JMP 0x0073e532
LAB_0073e527:
0073E527  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
0073E52D  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0073E530  EB 05                     JMP 0x0073e537
LAB_0073e532:
0073E532  E9 07 FF FF FF            JMP 0x0073e43e
LAB_0073e537:
0073E537  EB 4D                     JMP 0x0073e586
LAB_0073e539:
0073E539  6A 00                     PUSH 0x0
0073E53B  8D 85 E8 FB FF FF         LEA EAX,[EBP + 0xfffffbe8]
0073E541  50                        PUSH EAX
0073E542  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0073E545  51                        PUSH ECX
0073E546  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073E549  52                        PUSH EDX
0073E54A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073E54D  C1 F8 05                  SAR EAX,0x5
0073E550  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073E553  83 E1 1F                  AND ECX,0x1f
0073E556  8B 14 85 A0 A1 85 00      MOV EDX,dword ptr [EAX*0x4 + 0x85a1a0]
0073E55D  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
0073E560  50                        PUSH EAX
0073E561  FF 15 90 BC 85 00         CALL dword ptr [0x0085bc90]
0073E567  85 C0                     TEST EAX,EAX
0073E569  74 12                     JZ 0x0073e57d
0073E56B  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0073E572  8B 8D E8 FB FF FF         MOV ECX,dword ptr [EBP + 0xfffffbe8]
0073E578  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0073E57B  EB 09                     JMP 0x0073e586
LAB_0073e57d:
0073E57D  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
0073E583  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0073e586:
0073E586  83 7D F0 00               CMP dword ptr [EBP + -0x10],0x0
0073E58A  75 79                     JNZ 0x0073e605
0073E58C  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
0073E590  74 2C                     JZ 0x0073e5be
0073E592  83 7D F4 05               CMP dword ptr [EBP + -0xc],0x5
0073E596  75 15                     JNZ 0x0073e5ad
0073E598  C7 05 48 71 85 00 09 00 00 00  MOV dword ptr [0x00857148],0x9
0073E5A2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073E5A5  89 15 4C 71 85 00         MOV dword ptr [0x0085714c],EDX
0073E5AB  EB 0C                     JMP 0x0073e5b9
LAB_0073e5ad:
0073E5AD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073E5B0  50                        PUSH EAX
0073E5B1  E8 3A 26 00 00            CALL 0x00740bf0
0073E5B6  83 C4 04                  ADD ESP,0x4
LAB_0073e5b9:
0073E5B9  83 C8 FF                  OR EAX,0xffffffff
0073E5BC  EB 50                     JMP 0x0073e60e
LAB_0073e5be:
0073E5BE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073E5C1  C1 F9 05                  SAR ECX,0x5
0073E5C4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073E5C7  83 E2 1F                  AND EDX,0x1f
0073E5CA  8B 04 8D A0 A1 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x85a1a0]
0073E5D1  0F BE 4C D0 04            MOVSX ECX,byte ptr [EAX + EDX*0x8 + 0x4]
0073E5D6  83 E1 40                  AND ECX,0x40
0073E5D9  85 C9                     TEST ECX,ECX
0073E5DB  74 0F                     JZ 0x0073e5ec
0073E5DD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0073E5E0  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0073E5E3  83 F8 1A                  CMP EAX,0x1a
0073E5E6  75 04                     JNZ 0x0073e5ec
0073E5E8  33 C0                     XOR EAX,EAX
0073E5EA  EB 22                     JMP 0x0073e60e
LAB_0073e5ec:
0073E5EC  C7 05 48 71 85 00 1C 00 00 00  MOV dword ptr [0x00857148],0x1c
0073E5F6  C7 05 4C 71 85 00 00 00 00 00  MOV dword ptr [0x0085714c],0x0
0073E600  83 C8 FF                  OR EAX,0xffffffff
0073E603  EB 09                     JMP 0x0073e60e
LAB_0073e605:
0073E605  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0073E608  2B 85 E0 FB FF FF         SUB EAX,dword ptr [EBP + 0xfffffbe0]
LAB_0073e60e:
0073E60E  8B E5                     MOV ESP,EBP
0073E610  5D                        POP EBP
0073E611  C3                        RET
