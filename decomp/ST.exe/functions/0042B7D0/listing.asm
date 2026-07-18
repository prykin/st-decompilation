STAllPlayersC::AddObjsToGroup:
0042B7D0  55                        PUSH EBP
0042B7D1  8B EC                     MOV EBP,ESP
0042B7D3  81 EC 8C 00 00 00         SUB ESP,0x8c
0042B7D9  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042B7DC  53                        PUSH EBX
0042B7DD  56                        PUSH ESI
0042B7DE  57                        PUSH EDI
0042B7DF  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0042B7E2  8B D9                     MOV EBX,ECX
0042B7E4  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042B7E8  33 F6                     XOR ESI,ESI
0042B7EA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042B7ED  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0042B7F0  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042B7F3  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042B7F6  C1 E1 04                  SHL ECX,0x4
0042B7F9  03 C8                     ADD ECX,EAX
0042B7FB  3B FE                     CMP EDI,ESI
0042B7FD  8B 14 4D 25 4E 7F 00      MOV EDX,dword ptr [ECX*0x2 + 0x7f4e25]
0042B804  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0042B807  7E 2A                     JLE 0x0042b833
LAB_0042b809:
0042B809  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0042B80C  8D 45 EC                  LEA EAX,[EBP + -0x14]
0042B80F  50                        PUSH EAX
0042B810  8B D6                     MOV EDX,ESI
0042B812  E8 59 14 28 00            CALL 0x006acc70
0042B817  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0042B81A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0042B81D  51                        PUSH ECX
0042B81E  52                        PUSH EDX
0042B81F  8B CB                     MOV ECX,EBX
0042B821  E8 E0 8D FD FF            CALL 0x00404606
0042B826  85 C0                     TEST EAX,EAX
0042B828  0F 84 E0 00 00 00         JZ 0x0042b90e
0042B82E  46                        INC ESI
0042B82F  3B F7                     CMP ESI,EDI
0042B831  7C D6                     JL 0x0042b809
LAB_0042b833:
0042B833  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0042B836  33 F6                     XOR ESI,ESI
0042B838  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0042B83B  85 FF                     TEST EDI,EDI
0042B83D  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
0042B840  7E 4F                     JLE 0x0042b891
0042B842  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_0042b845:
0042B845  8D 4D F8                  LEA ECX,[EBP + -0x8]
0042B848  8B D6                     MOV EDX,ESI
0042B84A  51                        PUSH ECX
0042B84B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0042B84E  E8 1D 14 28 00            CALL 0x006acc70
0042B853  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042B856  85 C9                     TEST ECX,ECX
0042B858  74 32                     JZ 0x0042b88c
0042B85A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0042B85D  52                        PUSH EDX
0042B85E  E8 85 79 FD FF            CALL 0x004031e8
0042B863  83 F8 01                  CMP EAX,0x1
0042B866  75 12                     JNZ 0x0042b87a
0042B868  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042B86B  8D 55 FF                  LEA EDX,[EBP + -0x1]
0042B86E  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
0042B872  52                        PUSH EDX
0042B873  8B 01                     MOV EAX,dword ptr [ECX]
0042B875  6A 65                     PUSH 0x65
0042B877  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_0042b87a:
0042B87A  8B C3                     MOV EAX,EBX
0042B87C  25 FF FF 00 00            AND EAX,0xffff
0042B881  3B F0                     CMP ESI,EAX
0042B883  75 07                     JNZ 0x0042b88c
0042B885  C7 45 E4 01 00 00 00      MOV dword ptr [EBP + -0x1c],0x1
LAB_0042b88c:
0042B88C  46                        INC ESI
0042B88D  3B F7                     CMP ESI,EDI
0042B88F  7C B4                     JL 0x0042b845
LAB_0042b891:
0042B891  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0042B897  8D 85 78 FF FF FF         LEA EAX,[EBP + 0xffffff78]
0042B89D  8D 95 74 FF FF FF         LEA EDX,[EBP + 0xffffff74]
0042B8A3  6A 00                     PUSH 0x0
0042B8A5  50                        PUSH EAX
0042B8A6  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
0042B8AC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0042B8B2  E8 39 1F 30 00            CALL 0x0072d7f0
0042B8B7  8B F0                     MOV ESI,EAX
0042B8B9  83 C4 08                  ADD ESP,0x8
0042B8BC  85 F6                     TEST ESI,ESI
0042B8BE  0F 85 64 01 00 00         JNZ 0x0042ba28
0042B8C4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0042B8C7  66 81 FA FE FF            CMP DX,0xfffe
0042B8CC  74 4E                     JZ 0x0042b91c
0042B8CE  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0042B8D1  85 C0                     TEST EAX,EAX
0042B8D3  74 47                     JZ 0x0042b91c
0042B8D5  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0042B8D8  8D 4D F8                  LEA ECX,[EBP + -0x8]
0042B8DB  51                        PUSH ECX
0042B8DC  81 E2 FF FF 00 00         AND EDX,0xffff
0042B8E2  8B CF                     MOV ECX,EDI
0042B8E4  E8 87 13 28 00            CALL 0x006acc70
0042B8E9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0042B8EC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042B8EF  6A 01                     PUSH 0x1
0042B8F1  52                        PUSH EDX
0042B8F2  E8 89 81 FD FF            CALL 0x00403a80
0042B8F7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042B8FA  8D 55 FF                  LEA EDX,[EBP + -0x1]
0042B8FD  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
0042B901  52                        PUSH EDX
0042B902  8B 01                     MOV EAX,dword ptr [ECX]
0042B904  6A 65                     PUSH 0x65
0042B906  FF 50 08                  CALL dword ptr [EAX + 0x8]
0042B909  E9 AA 00 00 00            JMP 0x0042b9b8
LAB_0042b90e:
0042B90E  B8 02 00 FE AF            MOV EAX,0xaffe0002
0042B913  5F                        POP EDI
0042B914  5E                        POP ESI
0042B915  5B                        POP EBX
0042B916  8B E5                     MOV ESP,EBP
0042B918  5D                        POP EBP
0042B919  C2 10 00                  RET 0x10
LAB_0042b91c:
0042B91C  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
0042B91F  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0042B922  8B DE                     MOV EBX,ESI
0042B924  4E                        DEC ESI
0042B925  85 F6                     TEST ESI,ESI
0042B927  7C 19                     JL 0x0042b942
LAB_0042b929:
0042B929  8D 45 F8                  LEA EAX,[EBP + -0x8]
0042B92C  8B D6                     MOV EDX,ESI
0042B92E  50                        PUSH EAX
0042B92F  8B CF                     MOV ECX,EDI
0042B931  E8 3A 13 28 00            CALL 0x006acc70
0042B936  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042B939  85 C0                     TEST EAX,EAX
0042B93B  75 02                     JNZ 0x0042b93f
0042B93D  8B DE                     MOV EBX,ESI
LAB_0042b93f:
0042B93F  4E                        DEC ESI
0042B940  79 E7                     JNS 0x0042b929
LAB_0042b942:
0042B942  0F BE 4D 08               MOVSX ECX,byte ptr [EBP + 0x8]
0042B946  33 C0                     XOR EAX,EAX
0042B948  8B F3                     MOV ESI,EBX
0042B94A  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0042B94D  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0042B950  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0042B953  50                        PUSH EAX
0042B954  8D 45 B8                  LEA EAX,[EBP + -0x48]
0042B957  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
0042B95A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0042B960  50                        PUSH EAX
0042B961  8D 45 F4                  LEA EAX,[EBP + -0xc]
0042B964  81 E6 FF FF 00 00         AND ESI,0xffff
0042B96A  50                        PUSH EAX
0042B96B  8D 45 E8                  LEA EAX,[EBP + -0x18]
0042B96E  89 75 CC                  MOV dword ptr [EBP + -0x34],ESI
0042B971  C7 45 C4 01 00 00 00      MOV dword ptr [EBP + -0x3c],0x1
0042B978  8B 11                     MOV EDX,dword ptr [ECX]
0042B97A  50                        PUSH EAX
0042B97B  68 FF 10 00 00            PUSH 0x10ff
0042B980  FF 52 08                  CALL dword ptr [EDX + 0x8]
0042B983  8D 4D F4                  LEA ECX,[EBP + -0xc]
0042B986  51                        PUSH ECX
0042B987  56                        PUSH ESI
0042B988  57                        PUSH EDI
0042B989  E8 B2 27 28 00            CALL 0x006ae140
0042B98E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0042B991  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0042B994  6A 00                     PUSH 0x0
0042B996  52                        PUSH EDX
0042B997  E8 E4 80 FD FF            CALL 0x00403a80
0042B99C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0042B99F  8D 55 FF                  LEA EDX,[EBP + -0x1]
0042B9A2  C6 45 FF 02               MOV byte ptr [EBP + -0x1],0x2
0042B9A6  52                        PUSH EDX
0042B9A7  8B 01                     MOV EAX,dword ptr [ECX]
0042B9A9  6A 65                     PUSH 0x65
0042B9AB  FF 50 08                  CALL dword ptr [EAX + 0x8]
0042B9AE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0042B9B1  85 C0                     TEST EAX,EAX
0042B9B3  74 03                     JZ 0x0042b9b8
0042B9B5  66 89 18                  MOV word ptr [EAX],BX
LAB_0042b9b8:
0042B9B8  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
0042B9BB  33 F6                     XOR ESI,ESI
0042B9BD  85 DB                     TEST EBX,EBX
0042B9BF  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
0042B9C2  7E 4D                     JLE 0x0042ba11
LAB_0042b9c4:
0042B9C4  8D 45 F8                  LEA EAX,[EBP + -0x8]
0042B9C7  8B D6                     MOV EDX,ESI
0042B9C9  50                        PUSH EAX
0042B9CA  8B CF                     MOV ECX,EDI
0042B9CC  E8 9F 12 28 00            CALL 0x006acc70
0042B9D1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042B9D4  85 C9                     TEST ECX,ECX
0042B9D6  74 34                     JZ 0x0042ba0c
0042B9D8  66 83 79 27 00            CMP word ptr [ECX + 0x27],0x0
0042B9DD  75 2D                     JNZ 0x0042ba0c
0042B9DF  E8 6E 9A FD FF            CALL 0x00405452
0042B9E4  85 C0                     TEST EAX,EAX
0042B9E6  75 24                     JNZ 0x0042ba0c
0042B9E8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042B9EB  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0042B9EE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0042B9F4  52                        PUSH EDX
0042B9F5  E8 32 89 FD FF            CALL 0x0040432c
0042B9FA  8D 45 F8                  LEA EAX,[EBP + -0x8]
0042B9FD  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0042BA04  50                        PUSH EAX
0042BA05  56                        PUSH ESI
0042BA06  57                        PUSH EDI
0042BA07  E8 34 27 28 00            CALL 0x006ae140
LAB_0042ba0c:
0042BA0C  46                        INC ESI
0042BA0D  3B F3                     CMP ESI,EBX
0042BA0F  7C B3                     JL 0x0042b9c4
LAB_0042ba11:
0042BA11  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
0042BA17  33 C0                     XOR EAX,EAX
0042BA19  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042BA1F  5F                        POP EDI
0042BA20  5E                        POP ESI
0042BA21  5B                        POP EBX
0042BA22  8B E5                     MOV ESP,EBP
0042BA24  5D                        POP EBP
0042BA25  C2 10 00                  RET 0x10
LAB_0042ba28:
0042BA28  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
0042BA2E  68 D0 60 7A 00            PUSH 0x7a60d0
0042BA33  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042BA38  56                        PUSH ESI
0042BA39  6A 00                     PUSH 0x0
0042BA3B  68 D8 01 00 00            PUSH 0x1d8
0042BA40  68 04 60 7A 00            PUSH 0x7a6004
0042BA45  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0042BA4B  E8 80 1A 28 00            CALL 0x006ad4d0
0042BA50  83 C4 18                  ADD ESP,0x18
0042BA53  85 C0                     TEST EAX,EAX
0042BA55  74 01                     JZ 0x0042ba58
0042BA57  CC                        INT3
LAB_0042ba58:
0042BA58  68 D9 01 00 00            PUSH 0x1d9
0042BA5D  68 04 60 7A 00            PUSH 0x7a6004
0042BA62  6A 00                     PUSH 0x0
0042BA64  56                        PUSH ESI
0042BA65  E8 D6 A3 27 00            CALL 0x006a5e40
0042BA6A  5F                        POP EDI
0042BA6B  5E                        POP ESI
0042BA6C  83 C8 FF                  OR EAX,0xffffffff
0042BA6F  5B                        POP EBX
0042BA70  8B E5                     MOV ESP,EBP
0042BA72  5D                        POP EBP
0042BA73  C2 10 00                  RET 0x10
