PopUpTy::AddStr:
0052D370  55                        PUSH EBP
0052D371  8B EC                     MOV EBP,ESP
0052D373  83 EC 54                  SUB ESP,0x54
0052D376  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052D379  53                        PUSH EBX
0052D37A  56                        PUSH ESI
0052D37B  57                        PUSH EDI
0052D37C  33 FF                     XOR EDI,EDI
0052D37E  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0052D381  3B C7                     CMP EAX,EDI
0052D383  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0052D386  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0052D389  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0052D38C  0F 84 46 02 00 00         JZ 0x0052d5d8
0052D392  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052D397  8D 55 B0                  LEA EDX,[EBP + -0x50]
0052D39A  8D 4D AC                  LEA ECX,[EBP + -0x54]
0052D39D  57                        PUSH EDI
0052D39E  52                        PUSH EDX
0052D39F  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0052D3A2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052D3A8  E8 43 04 20 00            CALL 0x0072d7f0
0052D3AD  8B F0                     MOV ESI,EAX
0052D3AF  83 C4 08                  ADD ESP,0x8
0052D3B2  3B F7                     CMP ESI,EDI
0052D3B4  0F 85 E7 01 00 00         JNZ 0x0052d5a1
0052D3BA  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0052D3BD  83 C9 FF                  OR ECX,0xffffffff
0052D3C0  8B FB                     MOV EDI,EBX
0052D3C2  33 C0                     XOR EAX,EAX
0052D3C4  F2 AE                     SCASB.REPNE ES:EDI
0052D3C6  F7 D1                     NOT ECX
0052D3C8  83 C1 04                  ADD ECX,0x4
0052D3CB  51                        PUSH ECX
0052D3CC  E8 3F D8 17 00            CALL 0x006aac10
0052D3D1  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0052D3D4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0052D3D7  85 C0                     TEST EAX,EAX
0052D3D9  74 3E                     JZ 0x0052d419
0052D3DB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0052D3DE  53                        PUSH EBX
0052D3DF  81 E1 FF 00 00 00         AND ECX,0xff
0052D3E5  51                        PUSH ECX
0052D3E6  68 F0 6F 7C 00            PUSH 0x7c6ff0
0052D3EB  68 E4 6F 7C 00            PUSH 0x7c6fe4
0052D3F0  50                        PUSH EAX
0052D3F1  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0052D3F7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0052D3FA  8B 8E 94 00 00 00         MOV ECX,dword ptr [ESI + 0x94]
0052D400  83 C4 14                  ADD ESP,0x14
0052D403  52                        PUSH EDX
0052D404  E8 77 5B 1E 00            CALL 0x00712f80
0052D409  8B F8                     MOV EDI,EAX
0052D40B  8D 45 FC                  LEA EAX,[EBP + -0x4]
0052D40E  50                        PUSH EAX
0052D40F  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0052D412  E8 49 DC 17 00            CALL 0x006ab060
0052D417  EB 03                     JMP 0x0052d41c
LAB_0052d419:
0052D419  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0052d41c:
0052D41C  85 FF                     TEST EDI,EDI
0052D41E  74 47                     JZ 0x0052d467
0052D420  8B 0D 48 73 80 00         MOV ECX,dword ptr [0x00807348]
0052D426  6A 01                     PUSH 0x1
0052D428  81 E1 FF 00 00 00         AND ECX,0xff
0052D42E  6A FF                     PUSH -0x1
0052D430  C1 E1 04                  SHL ECX,0x4
0052D433  6A 00                     PUSH 0x0
0052D435  8B 91 70 75 80 00         MOV EDX,dword ptr [ECX + 0x807570]
0052D43B  8B 8E 94 00 00 00         MOV ECX,dword ptr [ESI + 0x94]
0052D441  52                        PUSH EDX
0052D442  68 D8 21 7C 00            PUSH 0x7c21d8
0052D447  57                        PUSH EDI
0052D448  E8 A3 4D 1E 00            CALL 0x007121f0
0052D44D  8B 8E 94 00 00 00         MOV ECX,dword ptr [ESI + 0x94]
0052D453  8B D8                     MOV EBX,EAX
0052D455  53                        PUSH EBX
0052D456  53                        PUSH EBX
0052D457  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0052D45A  E8 71 55 1E 00            CALL 0x007129d0
0052D45F  57                        PUSH EDI
0052D460  E8 0B 81 18 00            CALL 0x006b5570
0052D465  EB 03                     JMP 0x0052d46a
LAB_0052d467:
0052D467  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_0052d46a:
0052D46A  85 DB                     TEST EBX,EBX
0052D46C  0F 84 1D 01 00 00         JZ 0x0052d58f
0052D472  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0052D475  33 FF                     XOR EDI,EDI
0052D477  85 C0                     TEST EAX,EAX
0052D479  0F 8E 0A 01 00 00         JLE 0x0052d589
0052D47F  3B F8                     CMP EDI,EAX
0052D481  7D 08                     JGE 0x0052d48b
LAB_0052d483:
0052D483  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
0052D486  8B 04 B8                  MOV EAX,dword ptr [EAX + EDI*0x4]
0052D489  EB 02                     JMP 0x0052d48d
LAB_0052d48b:
0052D48B  33 C0                     XOR EAX,EAX
LAB_0052d48d:
0052D48D  8B 8E 98 00 00 00         MOV ECX,dword ptr [ESI + 0x98]
0052D493  50                        PUSH EAX
0052D494  51                        PUSH ECX
0052D495  E8 06 86 18 00            CALL 0x006b5aa0
0052D49A  8A 86 9C 00 00 00         MOV AL,byte ptr [ESI + 0x9c]
0052D4A0  8A 0D 46 73 80 00         MOV CL,byte ptr [0x00807346]
0052D4A6  3A C1                     CMP AL,CL
0052D4A8  73 08                     JNC 0x0052d4b2
0052D4AA  FE C0                     INC AL
0052D4AC  88 86 9C 00 00 00         MOV byte ptr [ESI + 0x9c],AL
LAB_0052d4b2:
0052D4B2  8A 86 9C 00 00 00         MOV AL,byte ptr [ESI + 0x9c]
0052D4B8  8A 0D 46 73 80 00         MOV CL,byte ptr [0x00807346]
0052D4BE  3A C1                     CMP AL,CL
0052D4C0  0F 87 B7 00 00 00         JA 0x0052d57d
0052D4C6  FE C8                     DEC AL
0052D4C8  8B CE                     MOV ECX,ESI
0052D4CA  50                        PUSH EAX
0052D4CB  E8 E5 6C ED FF            CALL 0x004041b5
0052D4D0  A1 42 73 80 00            MOV EAX,[0x00807342]
0052D4D5  85 C0                     TEST EAX,EAX
0052D4D7  0F 84 A0 00 00 00         JZ 0x0052d57d
0052D4DD  8B 8E 98 00 00 00         MOV ECX,dword ptr [ESI + 0x98]
0052D4E3  33 C0                     XOR EAX,EAX
0052D4E5  8A 86 9C 00 00 00         MOV AL,byte ptr [ESI + 0x9c]
0052D4EB  8D 50 FF                  LEA EDX,[EAX + -0x1]
0052D4EE  3B 51 08                  CMP EDX,dword ptr [ECX + 0x8]
0052D4F1  7D 09                     JGE 0x0052d4fc
0052D4F3  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0052D4F6  8B 44 81 FC               MOV EAX,dword ptr [ECX + EAX*0x4 + -0x4]
0052D4FA  EB 02                     JMP 0x0052d4fe
LAB_0052d4fc:
0052D4FC  33 C0                     XOR EAX,EAX
LAB_0052d4fe:
0052D4FE  8B 8E 94 00 00 00         MOV ECX,dword ptr [ESI + 0x94]
0052D504  50                        PUSH EAX
0052D505  E8 06 3C 1E 00            CALL 0x00711110
0052D50A  8B 96 90 00 00 00         MOV EDX,dword ptr [ESI + 0x90]
0052D510  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0052D513  3B C1                     CMP EAX,ECX
0052D515  7C 02                     JL 0x0052d519
0052D517  8B C1                     MOV EAX,ECX
LAB_0052d519:
0052D519  33 C9                     XOR ECX,ECX
0052D51B  33 D2                     XOR EDX,EDX
0052D51D  8A 8E 9C 00 00 00         MOV CL,byte ptr [ESI + 0x9c]
0052D523  6A 13                     PUSH 0x13
0052D525  50                        PUSH EAX
0052D526  89 44 8E 50               MOV dword ptr [ESI + ECX*0x4 + 0x50],EAX
0052D52A  8A 96 9C 00 00 00         MOV DL,byte ptr [ESI + 0x9c]
0052D530  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052D536  8B 44 96 14               MOV EAX,dword ptr [ESI + EDX*0x4 + 0x14]
0052D53A  50                        PUSH EAX
0052D53B  51                        PUSH ECX
0052D53C  E8 BF 52 18 00            CALL 0x006b2800
0052D541  33 C0                     XOR EAX,EAX
0052D543  8A 86 9C 00 00 00         MOV AL,byte ptr [ESI + 0x9c]
0052D549  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0052D54C  8D 4C 50 0B               LEA ECX,[EAX + EDX*0x2 + 0xb]
0052D550  8B 54 86 14               MOV EDX,dword ptr [ESI + EAX*0x4 + 0x14]
0052D554  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0052D559  51                        PUSH ECX
0052D55A  6A 0D                     PUSH 0xd
0052D55C  6A FF                     PUSH -0x1
0052D55E  52                        PUSH EDX
0052D55F  50                        PUSH EAX
0052D560  E8 DB 60 18 00            CALL 0x006b3640
0052D565  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0052D56A  33 C9                     XOR ECX,ECX
0052D56C  8A 8E 9C 00 00 00         MOV CL,byte ptr [ESI + 0x9c]
0052D572  8B 54 8E 14               MOV EDX,dword ptr [ESI + ECX*0x4 + 0x14]
0052D576  52                        PUSH EDX
0052D577  50                        PUSH EAX
0052D578  E8 B3 5E 18 00            CALL 0x006b3430
LAB_0052d57d:
0052D57D  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0052D580  47                        INC EDI
0052D581  3B F8                     CMP EDI,EAX
0052D583  0F 8C FA FE FF FF         JL 0x0052d483
LAB_0052d589:
0052D589  53                        PUSH EBX
0052D58A  E8 E1 7F 18 00            CALL 0x006b5570
LAB_0052d58f:
0052D58F  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0052D592  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052D598  5F                        POP EDI
0052D599  5E                        POP ESI
0052D59A  5B                        POP EBX
0052D59B  8B E5                     MOV ESP,EBP
0052D59D  5D                        POP EBP
0052D59E  C2 08 00                  RET 0x8
LAB_0052d5a1:
0052D5A1  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0052D5A4  68 D0 6F 7C 00            PUSH 0x7c6fd0
0052D5A9  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052D5AE  56                        PUSH ESI
0052D5AF  57                        PUSH EDI
0052D5B0  6A 61                     PUSH 0x61
0052D5B2  68 84 6F 7C 00            PUSH 0x7c6f84
0052D5B7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0052D5BD  E8 0E FF 17 00            CALL 0x006ad4d0
0052D5C2  83 C4 18                  ADD ESP,0x18
0052D5C5  85 C0                     TEST EAX,EAX
0052D5C7  74 01                     JZ 0x0052d5ca
0052D5C9  CC                        INT3
LAB_0052d5ca:
0052D5CA  6A 61                     PUSH 0x61
0052D5CC  68 84 6F 7C 00            PUSH 0x7c6f84
0052D5D1  57                        PUSH EDI
0052D5D2  56                        PUSH ESI
0052D5D3  E8 68 88 17 00            CALL 0x006a5e40
LAB_0052d5d8:
0052D5D8  5F                        POP EDI
0052D5D9  5E                        POP ESI
0052D5DA  5B                        POP EBX
0052D5DB  8B E5                     MOV ESP,EBP
0052D5DD  5D                        POP EBP
0052D5DE  C2 08 00                  RET 0x8
