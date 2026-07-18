FUN_0072f260:
0072F260  55                        PUSH EBP
0072F261  8B EC                     MOV EBP,ESP
0072F263  81 EC AC 00 00 00         SUB ESP,0xac
0072F269  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0072F26D  7C 06                     JL 0x0072f275
0072F26F  83 7D 08 05               CMP dword ptr [EBP + 0x8],0x5
0072F273  7E 07                     JLE 0x0072f27c
LAB_0072f275:
0072F275  33 C0                     XOR EAX,EAX
0072F277  E9 43 03 00 00            JMP 0x0072f5bf
LAB_0072f27c:
0072F27C  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0072F280  74 3E                     JZ 0x0072f2c0
0072F282  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0072F286  74 18                     JZ 0x0072f2a0
0072F288  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072F28B  50                        PUSH EAX
0072F28C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072F28F  51                        PUSH ECX
0072F290  E8 3B 03 00 00            CALL 0x0072f5d0
0072F295  83 C4 08                  ADD ESP,0x8
0072F298  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
0072F29E  EB 12                     JMP 0x0072f2b2
LAB_0072f2a0:
0072F2A0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F2A3  6B D2 0C                  IMUL EDX,EDX,0xc
0072F2A6  8B 82 34 12 7F 00         MOV EAX,dword ptr [EDX + 0x7f1234]
0072F2AC  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
LAB_0072f2b2:
0072F2B2  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
0072F2B8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0072F2BB  E9 FC 02 00 00            JMP 0x0072f5bc
LAB_0072f2c0:
0072F2C0  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
0072F2C7  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0072F2CE  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0072F2D2  0F 84 DC 02 00 00         JZ 0x0072f5b4
0072F2D8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072F2DB  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0072F2DE  83 F8 4C                  CMP EAX,0x4c
0072F2E1  0F 85 DE 01 00 00         JNZ 0x0072f4c5
0072F2E7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072F2EA  0F BE 51 01               MOVSX EDX,byte ptr [ECX + 0x1]
0072F2EE  83 FA 43                  CMP EDX,0x43
0072F2F1  0F 85 CE 01 00 00         JNZ 0x0072f4c5
0072F2F7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072F2FA  0F BE 48 02               MOVSX ECX,byte ptr [EAX + 0x2]
0072F2FE  83 F9 5F                  CMP ECX,0x5f
0072F301  0F 85 BE 01 00 00         JNZ 0x0072f4c5
0072F307  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072F30A  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
LAB_0072f310:
0072F310  68 F0 FE 79 00            PUSH 0x79fef0
0072F315  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
0072F31B  50                        PUSH EAX
0072F31C  E8 DF AE 00 00            CALL 0x0073a200
0072F321  83 C4 08                  ADD ESP,0x8
0072F324  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
0072F32A  83 BD 64 FF FF FF 00      CMP dword ptr [EBP + 0xffffff64],0x0
0072F331  74 29                     JZ 0x0072f35c
0072F333  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
0072F339  2B 8D 68 FF FF FF         SUB ECX,dword ptr [EBP + 0xffffff68]
0072F33F  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
0072F345  83 BD 60 FF FF FF 00      CMP dword ptr [EBP + 0xffffff60],0x0
0072F34C  74 0E                     JZ 0x0072f35c
0072F34E  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
0072F354  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0072F357  83 F8 3B                  CMP EAX,0x3b
0072F35A  75 07                     JNZ 0x0072f363
LAB_0072f35c:
0072F35C  33 C0                     XOR EAX,EAX
0072F35E  E9 5C 02 00 00            JMP 0x0072f5bf
LAB_0072f363:
0072F363  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
0072F36A  EB 09                     JMP 0x0072f375
LAB_0072f36c:
0072F36C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0072F36F  83 C1 01                  ADD ECX,0x1
0072F372  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0072f375:
0072F375  83 7D F4 05               CMP dword ptr [EBP + -0xc],0x5
0072F379  7F 48                     JG 0x0072f3c3
0072F37B  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
0072F381  52                        PUSH EDX
0072F382  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
0072F388  50                        PUSH EAX
0072F389  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0072F38C  6B C9 0C                  IMUL ECX,ECX,0xc
0072F38F  8B 91 30 12 7F 00         MOV EDX,dword ptr [ECX + 0x7f1230]
0072F395  52                        PUSH EDX
0072F396  E8 55 F3 FF FF            CALL 0x0072e6f0
0072F39B  83 C4 0C                  ADD ESP,0xc
0072F39E  85 C0                     TEST EAX,EAX
0072F3A0  75 1F                     JNZ 0x0072f3c1
0072F3A2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0072F3A5  6B C0 0C                  IMUL EAX,EAX,0xc
0072F3A8  8B 88 30 12 7F 00         MOV ECX,dword ptr [EAX + 0x7f1230]
0072F3AE  51                        PUSH ECX
0072F3AF  E8 5C 78 00 00            CALL 0x00736c10
0072F3B4  83 C4 04                  ADD ESP,0x4
0072F3B7  39 85 60 FF FF FF         CMP dword ptr [EBP + 0xffffff60],EAX
0072F3BD  75 02                     JNZ 0x0072f3c1
0072F3BF  EB 02                     JMP 0x0072f3c3
LAB_0072f3c1:
0072F3C1  EB A9                     JMP 0x0072f36c
LAB_0072f3c3:
0072F3C3  68 EC FE 79 00            PUSH 0x79feec
0072F3C8  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
0072F3CE  83 C2 01                  ADD EDX,0x1
0072F3D1  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
0072F3D7  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
0072F3DD  50                        PUSH EAX
0072F3DE  E8 DD AD 00 00            CALL 0x0073a1c0
0072F3E3  83 C4 08                  ADD ESP,0x8
0072F3E6  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
0072F3EC  83 BD 60 FF FF FF 00      CMP dword ptr [EBP + 0xffffff60],0x0
0072F3F3  75 15                     JNZ 0x0072f40a
0072F3F5  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
0072F3FB  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0072F3FE  83 FA 3B                  CMP EDX,0x3b
0072F401  74 07                     JZ 0x0072f40a
0072F403  33 C0                     XOR EAX,EAX
0072F405  E9 B5 01 00 00            JMP 0x0072f5bf
LAB_0072f40a:
0072F40A  83 7D F4 05               CMP dword ptr [EBP + -0xc],0x5
0072F40E  7F 4B                     JG 0x0072f45b
0072F410  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
0072F416  50                        PUSH EAX
0072F417  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
0072F41D  51                        PUSH ECX
0072F41E  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
0072F424  52                        PUSH EDX
0072F425  E8 16 EF FF FF            CALL 0x0072e340
0072F42A  83 C4 0C                  ADD ESP,0xc
0072F42D  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
0072F433  C6 84 05 6C FF FF FF 00   MOV byte ptr [EBP + EAX*0x1 + 0xffffff6c],0x0
0072F43B  8D 8D 6C FF FF FF         LEA ECX,[EBP + 0xffffff6c]
0072F441  51                        PUSH ECX
0072F442  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0072F445  52                        PUSH EDX
0072F446  E8 85 01 00 00            CALL 0x0072f5d0
0072F44B  83 C4 08                  ADD ESP,0x8
0072F44E  85 C0                     TEST EAX,EAX
0072F450  74 09                     JZ 0x0072f45b
0072F452  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072F455  83 C0 01                  ADD EAX,0x1
0072F458  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0072f45b:
0072F45B  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
0072F461  03 8D 60 FF FF FF         ADD ECX,dword ptr [EBP + 0xffffff60]
0072F467  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
0072F46D  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
0072F473  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0072F476  85 C0                     TEST EAX,EAX
0072F478  74 0F                     JZ 0x0072f489
0072F47A  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
0072F480  83 C1 01                  ADD ECX,0x1
0072F483  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
LAB_0072f489:
0072F489  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
0072F48F  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0072F492  85 C0                     TEST EAX,EAX
0072F494  0F 85 76 FE FF FF         JNZ 0x0072f310
0072F49A  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0072F49E  74 0D                     JZ 0x0072f4ad
0072F4A0  E8 CB 02 00 00            CALL 0x0072f770
0072F4A5  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
0072F4AB  EB 0A                     JMP 0x0072f4b7
LAB_0072f4ad:
0072F4AD  C7 85 58 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff58],0x0
LAB_0072f4b7:
0072F4B7  8B 8D 58 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff58]
0072F4BD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0072F4C0  E9 ED 00 00 00            JMP 0x0072f5b2
LAB_0072f4c5:
0072F4C5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072F4C8  52                        PUSH EDX
0072F4C9  6A 00                     PUSH 0x0
0072F4CB  6A 00                     PUSH 0x0
0072F4CD  8D 85 6C FF FF FF         LEA EAX,[EBP + 0xffffff6c]
0072F4D3  50                        PUSH EAX
0072F4D4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072F4D7  51                        PUSH ECX
0072F4D8  E8 93 03 00 00            CALL 0x0072f870
0072F4DD  83 C4 14                  ADD ESP,0x14
0072F4E0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072F4E3  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0072F4E7  0F 84 C5 00 00 00         JZ 0x0072f5b2
0072F4ED  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0072F4F4  EB 09                     JMP 0x0072f4ff
LAB_0072f4f6:
0072F4F6  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0072F4F9  83 C2 01                  ADD EDX,0x1
0072F4FC  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_0072f4ff:
0072F4FF  83 7D F4 05               CMP dword ptr [EBP + -0xc],0x5
0072F503  7F 5C                     JG 0x0072f561
0072F505  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
0072F509  74 54                     JZ 0x0072f55f
0072F50B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0072F50E  6B C0 0C                  IMUL EAX,EAX,0xc
0072F511  8B 88 34 12 7F 00         MOV ECX,dword ptr [EAX + 0x7f1234]
0072F517  51                        PUSH ECX
0072F518  8D 95 6C FF FF FF         LEA EDX,[EBP + 0xffffff6c]
0072F51E  52                        PUSH EDX
0072F51F  E8 0C AC 00 00            CALL 0x0073a130
0072F524  83 C4 08                  ADD ESP,0x8
0072F527  85 C0                     TEST EAX,EAX
0072F529  74 2B                     JZ 0x0072f556
0072F52B  8D 85 6C FF FF FF         LEA EAX,[EBP + 0xffffff6c]
0072F531  50                        PUSH EAX
0072F532  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0072F535  51                        PUSH ECX
0072F536  E8 95 00 00 00            CALL 0x0072f5d0
0072F53B  83 C4 08                  ADD ESP,0x8
0072F53E  85 C0                     TEST EAX,EAX
0072F540  74 0B                     JZ 0x0072f54d
0072F542  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0072F545  83 C2 01                  ADD EDX,0x1
0072F548  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0072F54B  EB 07                     JMP 0x0072f554
LAB_0072f54d:
0072F54D  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
LAB_0072f554:
0072F554  EB 09                     JMP 0x0072f55f
LAB_0072f556:
0072F556  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072F559  83 C0 01                  ADD EAX,0x1
0072F55C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0072f55f:
0072F55F  EB 95                     JMP 0x0072f4f6
LAB_0072f561:
0072F561  83 7D F0 00               CMP dword ptr [EBP + -0x10],0x0
0072F565  74 25                     JZ 0x0072f58c
0072F567  E8 04 02 00 00            CALL 0x0072f770
0072F56C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072F56F  6A 02                     PUSH 0x2
0072F571  8B 0D 34 12 7F 00         MOV ECX,dword ptr [0x007f1234]
0072F577  51                        PUSH ECX
0072F578  E8 8F 4F CD FF            CALL 0x0040450c
0072F57D  83 C4 08                  ADD ESP,0x8
0072F580  C7 05 34 12 7F 00 00 00 00 00  MOV dword ptr [0x007f1234],0x0
0072F58A  EB 26                     JMP 0x0072f5b2
LAB_0072f58c:
0072F58C  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0072F590  74 0D                     JZ 0x0072f59f
0072F592  E8 D9 01 00 00            CALL 0x0072f770
0072F597  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
0072F59D  EB 0A                     JMP 0x0072f5a9
LAB_0072f59f:
0072F59F  C7 85 54 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff54],0x0
LAB_0072f5a9:
0072F5A9  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
0072F5AF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0072f5b2:
0072F5B2  EB 08                     JMP 0x0072f5bc
LAB_0072f5b4:
0072F5B4  E8 B7 01 00 00            CALL 0x0072f770
0072F5B9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0072f5bc:
0072F5BC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0072f5bf:
0072F5BF  8B E5                     MOV ESP,EBP
0072F5C1  5D                        POP EBP
0072F5C2  C3                        RET
