ControlClassTy::GetMessage:
0072B780  55                        PUSH EBP
0072B781  8B EC                     MOV EBP,ESP
0072B783  83 EC 6C                  SUB ESP,0x6c
0072B786  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0072B78B  53                        PUSH EBX
0072B78C  56                        PUSH ESI
0072B78D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0072B790  33 DB                     XOR EBX,EBX
0072B792  57                        PUSH EDI
0072B793  8D 55 98                  LEA EDX,[EBP + -0x68]
0072B796  8D 4D 94                  LEA ECX,[EBP + -0x6c]
0072B799  53                        PUSH EBX
0072B79A  52                        PUSH EDX
0072B79B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0072B79E  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
0072B7A1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0072B7A7  E8 44 20 00 00            CALL 0x0072d7f0
0072B7AC  83 C4 08                  ADD ESP,0x8
0072B7AF  3B C3                     CMP EAX,EBX
0072B7B1  0F 85 F6 09 00 00         JNZ 0x0072c1ad
0072B7B7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0072B7BA  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0072B7BD  83 F8 60                  CMP EAX,0x60
0072B7C0  0F 87 C7 09 00 00         JA 0x0072c18d
0072B7C6  33 C9                     XOR ECX,ECX
0072B7C8  8A 88 3C C2 72 00         MOV CL,byte ptr [EAX + 0x72c23c]
switchD_0072b7ce::switchD:
0072B7CE  FF 24 8D FC C1 72 00      JMP dword ptr [ECX*0x4 + 0x72c1fc]
switchD_0072b7ce::caseD_2:
0072B7D5  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0072B7D8  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
0072B7DB  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0072B7DE  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
0072B7E1  81 CB 00 00 00 70         OR EBX,0x70000000
0072B7E7  52                        PUSH EDX
0072B7E8  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
0072B7EB  E8 50 95 FB FF            CALL 0x006e4d40
0072B7F0  83 F8 01                  CMP EAX,0x1
0072B7F3  0F 85 9D 09 00 00         JNZ 0x0072c196
0072B7F9  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0072B7FC  8B 16                     MOV EDX,dword ptr [ESI]
0072B7FE  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0072B801  8D 45 D8                  LEA EAX,[EBP + -0x28]
0072B804  50                        PUSH EAX
0072B805  8B CE                     MOV ECX,ESI
0072B807  C7 45 E4 02 00 00 00      MOV dword ptr [EBP + -0x1c],0x2
0072B80E  C7 45 E8 08 00 00 00      MOV dword ptr [EBP + -0x18],0x8
0072B815  FF 12                     CALL dword ptr [EDX]
0072B817  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0072B81A  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0072B81D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072B823  8B C7                     MOV EAX,EDI
0072B825  5F                        POP EDI
0072B826  5E                        POP ESI
0072B827  5B                        POP EBX
0072B828  8B E5                     MOV ESP,EBP
0072B82A  5D                        POP EBP
0072B82B  C2 04 00                  RET 0x4
switchD_0072b7ce::caseD_3:
0072B82E  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0072B831  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0072B834  51                        PUSH ECX
0072B835  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
0072B838  E8 03 95 FB FF            CALL 0x006e4d40
0072B83D  83 F8 01                  CMP EAX,0x1
0072B840  0F 85 50 09 00 00         JNZ 0x0072c196
0072B846  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0072B849  8B 06                     MOV EAX,dword ptr [ESI]
0072B84B  8D 4D D8                  LEA ECX,[EBP + -0x28]
0072B84E  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0072B851  51                        PUSH ECX
0072B852  8B CE                     MOV ECX,ESI
0072B854  C7 45 E4 02 00 00 00      MOV dword ptr [EBP + -0x1c],0x2
0072B85B  C7 45 E8 09 00 00 00      MOV dword ptr [EBP + -0x18],0x9
0072B862  FF 10                     CALL dword ptr [EAX]
0072B864  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0072B867  8B F8                     MOV EDI,EAX
0072B869  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072B86F  5F                        POP EDI
0072B870  5E                        POP ESI
0072B871  5B                        POP EBX
0072B872  8B E5                     MOV ESP,EBP
0072B874  5D                        POP EBP
0072B875  C2 04 00                  RET 0x4
switchD_0072b7ce::caseD_8:
0072B878  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0072B87B  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0072B87E  A9 00 00 00 70            TEST EAX,0x70000000
0072B883  0F 84 0D 09 00 00         JZ 0x0072c196
0072B889  25 FF FF FF 8F            AND EAX,0x8fffffff
0072B88E  A9 00 00 00 80            TEST EAX,0x80000000
0072B893  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0072B896  75 2B                     JNZ 0x0072b8c3
0072B898  39 5E 34                  CMP dword ptr [ESI + 0x34],EBX
0072B89B  74 26                     JZ 0x0072b8c3
0072B89D  8D 45 D8                  LEA EAX,[EBP + -0x28]
0072B8A0  8D 56 24                  LEA EDX,[ESI + 0x24]
0072B8A3  50                        PUSH EAX
0072B8A4  8B CE                     MOV ECX,ESI
0072B8A6  C7 45 E4 0F 00 00 00      MOV dword ptr [EBP + -0x1c],0xf
0072B8AD  C7 45 E8 06 00 00 00      MOV dword ptr [EBP + -0x18],0x6
0072B8B4  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0072B8B7  E8 24 A7 FB FF            CALL 0x006e5fe0
0072B8BC  8B F8                     MOV EDI,EAX
0072B8BE  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0072B8C1  EB 03                     JMP 0x0072b8c6
LAB_0072b8c3:
0072B8C3  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0072b8c6:
0072B8C6  8B 16                     MOV EDX,dword ptr [ESI]
0072B8C8  8B CE                     MOV ECX,ESI
0072B8CA  FF 52 04                  CALL dword ptr [EDX + 0x4]
0072B8CD  85 C0                     TEST EAX,EAX
0072B8CF  0F 84 C4 08 00 00         JZ 0x0072c199
0072B8D5  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0072B8D8  BF FF FF 00 00            MOV EDI,0xffff
0072B8DD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072B8E3  8B C7                     MOV EAX,EDI
0072B8E5  5F                        POP EDI
0072B8E6  5E                        POP ESI
0072B8E7  5B                        POP EBX
0072B8E8  8B E5                     MOV ESP,EBP
0072B8EA  5D                        POP EBP
0072B8EB  C2 04 00                  RET 0x4
switchD_0072b7ce::caseD_9:
0072B8EE  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0072B8F1  BB 00 00 00 70            MOV EBX,0x70000000
0072B8F6  85 5E 1C                  TEST dword ptr [ESI + 0x1c],EBX
0072B8F9  0F 85 97 08 00 00         JNZ 0x0072c196
0072B8FF  8D 4D D8                  LEA ECX,[EBP + -0x28]
0072B902  8D 46 24                  LEA EAX,[ESI + 0x24]
0072B905  51                        PUSH ECX
0072B906  8B CE                     MOV ECX,ESI
0072B908  C7 45 E4 0F 00 00 00      MOV dword ptr [EBP + -0x1c],0xf
0072B90F  C7 45 E8 07 00 00 00      MOV dword ptr [EBP + -0x18],0x7
0072B916  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0072B919  E8 C2 A6 FB FF            CALL 0x006e5fe0
0072B91E  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0072B921  8B F8                     MOV EDI,EAX
0072B923  8B 86 80 00 00 00         MOV EAX,dword ptr [ESI + 0x80]
0072B929  0B CB                     OR ECX,EBX
0072B92B  85 C0                     TEST EAX,EAX
0072B92D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0072B930  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
0072B933  74 1C                     JZ 0x0072b951
0072B935  8B 46 70                  MOV EAX,dword ptr [ESI + 0x70]
0072B938  33 DB                     XOR EBX,EBX
0072B93A  3B C3                     CMP EAX,EBX
0072B93C  74 0B                     JZ 0x0072b949
0072B93E  8D 56 60                  LEA EDX,[ESI + 0x60]
0072B941  8B CE                     MOV ECX,ESI
0072B943  52                        PUSH EDX
0072B944  E8 97 A6 FB FF            CALL 0x006e5fe0
LAB_0072b949:
0072B949  89 9E 80 00 00 00         MOV dword ptr [ESI + 0x80],EBX
0072B94F  EB 02                     JMP 0x0072b953
LAB_0072b951:
0072B951  33 DB                     XOR EBX,EBX
LAB_0072b953:
0072B953  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
0072B959  89 9E 84 00 00 00         MOV dword ptr [ESI + 0x84],EBX
0072B95F  3B C3                     CMP EAX,EBX
0072B961  74 1C                     JZ 0x0072b97f
0072B963  39 9E C0 00 00 00         CMP dword ptr [ESI + 0xc0],EBX
0072B969  74 0E                     JZ 0x0072b979
0072B96B  8D 86 B0 00 00 00         LEA EAX,[ESI + 0xb0]
0072B971  8B CE                     MOV ECX,ESI
0072B973  50                        PUSH EAX
0072B974  E8 67 A6 FB FF            CALL 0x006e5fe0
LAB_0072b979:
0072B979  89 9E D0 00 00 00         MOV dword ptr [ESI + 0xd0],EBX
LAB_0072b97f:
0072B97F  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0072B982  89 9E D4 00 00 00         MOV dword ptr [ESI + 0xd4],EBX
0072B988  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072B98E  8B C7                     MOV EAX,EDI
0072B990  5F                        POP EDI
0072B991  5E                        POP ESI
0072B992  5B                        POP EBX
0072B993  8B E5                     MOV ESP,EBP
0072B995  5D                        POP EBP
0072B996  C2 04 00                  RET 0x4
switchD_0072b7ce::caseD_50:
0072B999  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0072B99C  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
0072B99F  8A 8E DC 00 00 00         MOV CL,byte ptr [ESI + 0xdc]
0072B9A5  8D 9E DC 00 00 00         LEA EBX,[ESI + 0xdc]
0072B9AB  F6 C1 08                  TEST CL,0x8
0072B9AE  74 0A                     JZ 0x0072b9ba
0072B9B0  8B 8E E0 00 00 00         MOV ECX,dword ptr [ESI + 0xe0]
0072B9B6  85 C9                     TEST ECX,ECX
0072B9B8  75 0E                     JNZ 0x0072b9c8
LAB_0072b9ba:
0072B9BA  8A 8E E0 00 00 00         MOV CL,byte ptr [ESI + 0xe0]
0072B9C0  84 C9                     TEST CL,CL
0072B9C2  0F 84 CE 07 00 00         JZ 0x0072c196
LAB_0072b9c8:
0072B9C8  8B 8E 28 01 00 00         MOV ECX,dword ptr [ESI + 0x128]
0072B9CE  85 C9                     TEST ECX,ECX
0072B9D0  0F 84 C0 07 00 00         JZ 0x0072c196
0072B9D6  66 83 7F 18 00            CMP word ptr [EDI + 0x18],0x0
0072B9DB  75 2C                     JNZ 0x0072ba09
0072B9DD  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0072B9E0  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0072B9E3  51                        PUSH ECX
0072B9E4  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0072B9E7  52                        PUSH EDX
0072B9E8  8B 10                     MOV EDX,dword ptr [EAX]
0072B9EA  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
0072B9ED  51                        PUSH ECX
0072B9EE  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
0072B9F1  52                        PUSH EDX
0072B9F2  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
0072B9F5  50                        PUSH EAX
0072B9F6  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0072B9F9  51                        PUSH ECX
0072B9FA  52                        PUSH EDX
0072B9FB  50                        PUSH EAX
0072B9FC  E8 8F 76 02 00            CALL 0x00753090
0072BA01  85 C0                     TEST EAX,EAX
0072BA03  0F 84 8D 07 00 00         JZ 0x0072c196
LAB_0072ba09:
0072BA09  8D 4D D8                  LEA ECX,[EBP + -0x28]
0072BA0C  C7 45 E8 11 00 00 00      MOV dword ptr [EBP + -0x18],0x11
0072BA13  51                        PUSH ECX
0072BA14  6A 01                     PUSH 0x1
0072BA16  6A 03                     PUSH 0x3
0072BA18  8B CE                     MOV ECX,ESI
0072BA1A  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0072BA1D  E8 DE A5 FB FF            CALL 0x006e6000
0072BA22  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0072BA25  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0072BA28  C7 86 28 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x128],0x0
0072BA32  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072BA38  8B C7                     MOV EAX,EDI
0072BA3A  5F                        POP EDI
0072BA3B  5E                        POP ESI
0072BA3C  5B                        POP EBX
0072BA3D  8B E5                     MOV ESP,EBP
0072BA3F  5D                        POP EBP
0072BA40  C2 04 00                  RET 0x4
switchD_0072b7ce::caseD_51:
0072BA43  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0072BA46  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
0072BA49  8A 8E DC 00 00 00         MOV CL,byte ptr [ESI + 0xdc]
0072BA4F  8D 9E DC 00 00 00         LEA EBX,[ESI + 0xdc]
0072BA55  F6 C1 08                  TEST CL,0x8
0072BA58  74 0A                     JZ 0x0072ba64
0072BA5A  8B 8E E0 00 00 00         MOV ECX,dword ptr [ESI + 0xe0]
0072BA60  85 C9                     TEST ECX,ECX
0072BA62  75 0E                     JNZ 0x0072ba72
LAB_0072ba64:
0072BA64  8A 8E E0 00 00 00         MOV CL,byte ptr [ESI + 0xe0]
0072BA6A  84 C9                     TEST CL,CL
0072BA6C  0F 84 24 07 00 00         JZ 0x0072c196
LAB_0072ba72:
0072BA72  8B 8E 28 01 00 00         MOV ECX,dword ptr [ESI + 0x128]
0072BA78  85 C9                     TEST ECX,ECX
0072BA7A  0F 85 16 07 00 00         JNZ 0x0072c196
0072BA80  66 83 7F 18 00            CMP word ptr [EDI + 0x18],0x0
0072BA85  75 2C                     JNZ 0x0072bab3
0072BA87  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0072BA8A  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0072BA8D  52                        PUSH EDX
0072BA8E  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0072BA91  8B 00                     MOV EAX,dword ptr [EAX]
0072BA93  51                        PUSH ECX
0072BA94  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0072BA97  52                        PUSH EDX
0072BA98  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
0072BA9B  50                        PUSH EAX
0072BA9C  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
0072BA9F  51                        PUSH ECX
0072BAA0  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0072BAA3  52                        PUSH EDX
0072BAA4  50                        PUSH EAX
0072BAA5  51                        PUSH ECX
0072BAA6  E8 E5 75 02 00            CALL 0x00753090
0072BAAB  85 C0                     TEST EAX,EAX
0072BAAD  0F 84 E3 06 00 00         JZ 0x0072c196
LAB_0072bab3:
0072BAB3  8D 55 D8                  LEA EDX,[EBP + -0x28]
0072BAB6  8B CE                     MOV ECX,ESI
0072BAB8  52                        PUSH EDX
0072BAB9  6A 01                     PUSH 0x1
0072BABB  6A 03                     PUSH 0x3
0072BABD  C7 45 E8 10 00 00 00      MOV dword ptr [EBP + -0x18],0x10
0072BAC4  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0072BAC7  E8 34 A5 FB FF            CALL 0x006e6000
0072BACC  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0072BACF  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0072BAD2  C7 86 28 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x128],0x1
0072BADC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072BAE2  8B C7                     MOV EAX,EDI
0072BAE4  5F                        POP EDI
0072BAE5  5E                        POP ESI
0072BAE6  5B                        POP EBX
0072BAE7  8B E5                     MOV ESP,EBP
0072BAE9  5D                        POP EBP
0072BAEA  C2 04 00                  RET 0x4
switchD_0072b7ce::caseD_5a:
0072BAED  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0072BAF0  8B 9E 28 01 00 00         MOV EBX,dword ptr [ESI + 0x128]
0072BAF6  85 DB                     TEST EBX,EBX
0072BAF8  74 1E                     JZ 0x0072bb18
0072BAFA  8B 06                     MOV EAX,dword ptr [ESI]
0072BAFC  8D 4D D8                  LEA ECX,[EBP + -0x28]
0072BAFF  51                        PUSH ECX
0072BB00  8B CE                     MOV ECX,ESI
0072BB02  C7 45 E8 50 00 00 00      MOV dword ptr [EBP + -0x18],0x50
0072BB09  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0072BB10  66 C7 45 F0 01 00         MOV word ptr [EBP + -0x10],0x1
0072BB16  FF 10                     CALL dword ptr [EAX]
LAB_0072bb18:
0072BB18  8B 57 14                  MOV EDX,dword ptr [EDI + 0x14]
0072BB1B  85 DB                     TEST EBX,EBX
0072BB1D  8B 02                     MOV EAX,dword ptr [EDX]
0072BB1F  89 86 DC 00 00 00         MOV dword ptr [ESI + 0xdc],EAX
0072BB25  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
0072BB28  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0072BB2B  89 96 E0 00 00 00         MOV dword ptr [ESI + 0xe0],EDX
0072BB31  0F 84 5F 06 00 00         JZ 0x0072c196
0072BB37  8B 06                     MOV EAX,dword ptr [ESI]
0072BB39  8D 4D D8                  LEA ECX,[EBP + -0x28]
0072BB3C  51                        PUSH ECX
0072BB3D  8B CE                     MOV ECX,ESI
0072BB3F  C7 45 E8 51 00 00 00      MOV dword ptr [EBP + -0x18],0x51
0072BB46  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0072BB4D  66 C7 45 F0 01 00         MOV word ptr [EBP + -0x10],0x1
0072BB53  FF 10                     CALL dword ptr [EAX]
0072BB55  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0072BB58  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0072BB5B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072BB61  8B C7                     MOV EAX,EDI
0072BB63  5F                        POP EDI
0072BB64  5E                        POP ESI
0072BB65  5B                        POP EBX
0072BB66  8B E5                     MOV ESP,EBP
0072BB68  5D                        POP EBP
0072BB69  C2 04 00                  RET 0x4
switchD_0072b7ce::caseD_5:
0072BB6C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0072BB6F  F7 41 1C 00 00 00 F0      TEST dword ptr [ECX + 0x1c],0xf0000000
0072BB76  0F 85 1A 06 00 00         JNZ 0x0072c196
0072BB7C  8B 11                     MOV EDX,dword ptr [ECX]
0072BB7E  E9 41 01 00 00            JMP 0x0072bcc4
switchD_0072b7ce::caseD_6:
0072BB83  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0072BB86  8B 07                     MOV EAX,dword ptr [EDI]
0072BB88  3B 46 08                  CMP EAX,dword ptr [ESI + 0x8]
0072BB8B  75 0A                     JNZ 0x0072bb97
0072BB8D  83 7F 04 02               CMP dword ptr [EDI + 0x4],0x2
0072BB91  0F 84 FF 05 00 00         JZ 0x0072c196
LAB_0072bb97:
0072BB97  39 5E 38                  CMP dword ptr [ESI + 0x38],EBX
0072BB9A  0F 84 F6 05 00 00         JZ 0x0072c196
0072BBA0  8B 7F 14                  MOV EDI,dword ptr [EDI + 0x14]
0072BBA3  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0072BBA6  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0072BBA9  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
0072BBAC  51                        PUSH ECX
0072BBAD  8B 0F                     MOV ECX,dword ptr [EDI]
0072BBAF  52                        PUSH EDX
0072BBB0  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
0072BBB3  50                        PUSH EAX
0072BBB4  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
0072BBB7  51                        PUSH ECX
0072BBB8  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
0072BBBB  52                        PUSH EDX
0072BBBC  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0072BBBF  50                        PUSH EAX
0072BBC0  51                        PUSH ECX
0072BBC1  52                        PUSH EDX
0072BBC2  E8 C9 74 02 00            CALL 0x00753090
0072BBC7  85 C0                     TEST EAX,EAX
0072BBC9  0F 84 C7 05 00 00         JZ 0x0072c196
0072BBCF  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0072BBD2  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0072BBD5  8B 86 80 00 00 00         MOV EAX,dword ptr [ESI + 0x80]
0072BBDB  81 CA 00 00 00 80         OR EDX,0x80000000
0072BBE1  41                        INC ECX
0072BBE2  3B C3                     CMP EAX,EBX
0072BBE4  89 56 1C                  MOV dword ptr [ESI + 0x1c],EDX
0072BBE7  89 4E 18                  MOV dword ptr [ESI + 0x18],ECX
0072BBEA  74 16                     JZ 0x0072bc02
0072BBEC  39 5E 70                  CMP dword ptr [ESI + 0x70],EBX
0072BBEF  74 0B                     JZ 0x0072bbfc
0072BBF1  8D 46 60                  LEA EAX,[ESI + 0x60]
0072BBF4  8B CE                     MOV ECX,ESI
0072BBF6  50                        PUSH EAX
0072BBF7  E8 E4 A3 FB FF            CALL 0x006e5fe0
LAB_0072bbfc:
0072BBFC  89 9E 80 00 00 00         MOV dword ptr [ESI + 0x80],EBX
LAB_0072bc02:
0072BC02  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
0072BC08  89 9E 84 00 00 00         MOV dword ptr [ESI + 0x84],EBX
0072BC0E  3B C3                     CMP EAX,EBX
0072BC10  74 1C                     JZ 0x0072bc2e
0072BC12  39 9E C0 00 00 00         CMP dword ptr [ESI + 0xc0],EBX
0072BC18  74 0E                     JZ 0x0072bc28
0072BC1A  8D 8E B0 00 00 00         LEA ECX,[ESI + 0xb0]
0072BC20  51                        PUSH ECX
0072BC21  8B CE                     MOV ECX,ESI
0072BC23  E8 B8 A3 FB FF            CALL 0x006e5fe0
LAB_0072bc28:
0072BC28  89 9E D0 00 00 00         MOV dword ptr [ESI + 0xd0],EBX
LAB_0072bc2e:
0072BC2E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0072BC31  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0072BC34  89 9E D4 00 00 00         MOV dword ptr [ESI + 0xd4],EBX
0072BC3A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072BC40  8B C7                     MOV EAX,EDI
0072BC42  5F                        POP EDI
0072BC43  5E                        POP ESI
0072BC44  5B                        POP EBX
0072BC45  8B E5                     MOV ESP,EBP
0072BC47  5D                        POP EBP
0072BC48  C2 04 00                  RET 0x4
switchD_0072b7ce::caseD_7:
0072BC4B  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0072BC4E  F7 46 1C 00 00 00 80      TEST dword ptr [ESI + 0x1c],0x80000000
0072BC55  0F 84 3B 05 00 00         JZ 0x0072c196
0072BC5B  8B 17                     MOV EDX,dword ptr [EDI]
0072BC5D  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0072BC60  3B D0                     CMP EDX,EAX
0072BC62  75 0A                     JNZ 0x0072bc6e
0072BC64  83 7F 04 02               CMP dword ptr [EDI + 0x4],0x2
0072BC68  0F 84 28 05 00 00         JZ 0x0072c196
LAB_0072bc6e:
0072BC6E  8B 7F 14                  MOV EDI,dword ptr [EDI + 0x14]
0072BC71  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0072BC74  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
0072BC77  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
0072BC7A  50                        PUSH EAX
0072BC7B  8B 07                     MOV EAX,dword ptr [EDI]
0072BC7D  51                        PUSH ECX
0072BC7E  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0072BC81  52                        PUSH EDX
0072BC82  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
0072BC85  50                        PUSH EAX
0072BC86  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
0072BC89  51                        PUSH ECX
0072BC8A  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0072BC8D  52                        PUSH EDX
0072BC8E  50                        PUSH EAX
0072BC8F  51                        PUSH ECX
0072BC90  E8 FB 73 02 00            CALL 0x00753090
0072BC95  85 C0                     TEST EAX,EAX
0072BC97  0F 84 F9 04 00 00         JZ 0x0072c196
0072BC9D  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0072BCA0  3B C3                     CMP EAX,EBX
0072BCA2  0F 86 EE 04 00 00         JBE 0x0072c196
0072BCA8  48                        DEC EAX
0072BCA9  3B C3                     CMP EAX,EBX
0072BCAB  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
0072BCAE  0F 85 E2 04 00 00         JNZ 0x0072c196
0072BCB4  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0072BCB7  8B CE                     MOV ECX,ESI
0072BCB9  81 E2 FF FF FF 7F         AND EDX,0x7fffffff
0072BCBF  89 56 1C                  MOV dword ptr [ESI + 0x1c],EDX
0072BCC2  8B 16                     MOV EDX,dword ptr [ESI]
LAB_0072bcc4:
0072BCC4  FF 52 04                  CALL dword ptr [EDX + 0x4]
0072BCC7  85 C0                     TEST EAX,EAX
0072BCC9  0F 84 C7 04 00 00         JZ 0x0072c196
0072BCCF  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0072BCD2  BF FF FF 00 00            MOV EDI,0xffff
0072BCD7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072BCDD  8B C7                     MOV EAX,EDI
0072BCDF  5F                        POP EDI
0072BCE0  5E                        POP ESI
0072BCE1  5B                        POP EBX
0072BCE2  8B E5                     MOV ESP,EBP
0072BCE4  5D                        POP EBP
0072BCE5  C2 04 00                  RET 0x4
switchD_0072b7ce::caseD_60:
0072BCE8  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0072BCEB  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0072BCEE  F7 C2 00 00 00 F0         TEST EDX,0xf0000000
0072BCF4  0F 85 9C 04 00 00         JNZ 0x0072c196
0072BCFA  33 C0                     XOR EAX,EAX
0072BCFC  33 C9                     XOR ECX,ECX
0072BCFE  66 8B 47 18               MOV AX,word ptr [EDI + 0x18]
0072BD02  66 8B 4F 1A               MOV CX,word ptr [EDI + 0x1a]
0072BD06  F7 C2 FF FF FF 00         TEST EDX,0xffffff
0072BD0C  75 14                     JNZ 0x0072bd22
0072BD0E  39 9E 88 00 00 00         CMP dword ptr [ESI + 0x88],EBX
0072BD14  75 0C                     JNZ 0x0072bd22
0072BD16  39 9E D8 00 00 00         CMP dword ptr [ESI + 0xd8],EBX
0072BD1C  0F 84 85 01 00 00         JZ 0x0072bea7
LAB_0072bd22:
0072BD22  8B 5E 24                  MOV EBX,dword ptr [ESI + 0x24]
0072BD25  3B C3                     CMP EAX,EBX
0072BD27  0F 8C 7A 01 00 00         JL 0x0072bea7
0072BD2D  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
0072BD30  03 D3                     ADD EDX,EBX
0072BD32  3B C2                     CMP EAX,EDX
0072BD34  0F 8D 6D 01 00 00         JGE 0x0072bea7
0072BD3A  8B 7E 28                  MOV EDI,dword ptr [ESI + 0x28]
0072BD3D  3B CF                     CMP ECX,EDI
0072BD3F  0F 8C 62 01 00 00         JL 0x0072bea7
0072BD45  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
0072BD48  03 D7                     ADD EDX,EDI
0072BD4A  3B CA                     CMP ECX,EDX
0072BD4C  0F 8D 55 01 00 00         JGE 0x0072bea7
0072BD52  8B 96 2C 01 00 00         MOV EDX,dword ptr [ESI + 0x12c]
0072BD58  85 D2                     TEST EDX,EDX
0072BD5A  74 20                     JZ 0x0072bd7c
0072BD5C  83 FA FF                  CMP EDX,-0x1
0072BD5F  74 1B                     JZ 0x0072bd7c
0072BD61  2B CF                     SUB ECX,EDI
0072BD63  2B C3                     SUB EAX,EBX
0072BD65  51                        PUSH ECX
0072BD66  50                        PUSH EAX
0072BD67  8B 86 30 01 00 00         MOV EAX,dword ptr [ESI + 0x130]
0072BD6D  50                        PUSH EAX
0072BD6E  52                        PUSH EDX
0072BD6F  E8 4C 98 F8 FF            CALL 0x006b55c0
0072BD74  85 C0                     TEST EAX,EAX
0072BD76  0F 84 2B 01 00 00         JZ 0x0072bea7
LAB_0072bd7c:
0072BD7C  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
0072BD7F  85 C0                     TEST EAX,EAX
0072BD81  75 10                     JNZ 0x0072bd93
0072BD83  8B 8E 9C 00 00 00         MOV ECX,dword ptr [ESI + 0x9c]
0072BD89  85 C9                     TEST ECX,ECX
0072BD8B  0F 84 16 01 00 00         JZ 0x0072bea7
0072BD91  85 C0                     TEST EAX,EAX
LAB_0072bd93:
0072BD93  8B 1D DC BE 85 00         MOV EBX,dword ptr [0x0085bedc]
0072BD99  74 23                     JZ 0x0072bdbe
0072BD9B  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
0072BD9E  85 C0                     TEST EAX,EAX
0072BDA0  74 67                     JZ 0x0072be09
0072BDA2  8B 86 84 00 00 00         MOV EAX,dword ptr [ESI + 0x84]
0072BDA8  85 C0                     TEST EAX,EAX
0072BDAA  75 0A                     JNZ 0x0072bdb6
0072BDAC  C7 86 80 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x80],0x0
LAB_0072bdb6:
0072BDB6  FF D3                     CALL EBX
0072BDB8  89 86 84 00 00 00         MOV dword ptr [ESI + 0x84],EAX
LAB_0072bdbe:
0072BDBE  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0072bdc1:
0072BDC1  8B 86 9C 00 00 00         MOV EAX,dword ptr [ESI + 0x9c]
0072BDC7  85 C0                     TEST EAX,EAX
0072BDC9  0F 84 CA 03 00 00         JZ 0x0072c199
0072BDCF  8B 86 AC 00 00 00         MOV EAX,dword ptr [ESI + 0xac]
0072BDD5  85 C0                     TEST EAX,EAX
0072BDD7  74 74                     JZ 0x0072be4d
0072BDD9  8B 86 D4 00 00 00         MOV EAX,dword ptr [ESI + 0xd4]
0072BDDF  85 C0                     TEST EAX,EAX
0072BDE1  75 0A                     JNZ 0x0072bded
0072BDE3  C7 86 D0 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xd0],0x0
LAB_0072bded:
0072BDED  FF D3                     CALL EBX
0072BDEF  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0072BDF2  89 86 D4 00 00 00         MOV dword ptr [ESI + 0xd4],EAX
0072BDF8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072BDFE  8B C7                     MOV EAX,EDI
0072BE00  5F                        POP EDI
0072BE01  5E                        POP ESI
0072BE02  5B                        POP EBX
0072BE03  8B E5                     MOV ESP,EBP
0072BE05  5D                        POP EBP
0072BE06  C2 04 00                  RET 0x4
LAB_0072be09:
0072BE09  8B 86 80 00 00 00         MOV EAX,dword ptr [ESI + 0x80]
0072BE0F  85 C0                     TEST EAX,EAX
0072BE11  75 AB                     JNZ 0x0072bdbe
0072BE13  8D 4E 3C                  LEA ECX,[ESI + 0x3c]
0072BE16  51                        PUSH ECX
0072BE17  8B CE                     MOV ECX,ESI
0072BE19  E8 C2 A1 FB FF            CALL 0x006e5fe0
0072BE1E  8B F8                     MOV EDI,EAX
0072BE20  85 FF                     TEST EDI,EDI
0072BE22  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0072BE25  74 17                     JZ 0x0072be3e
0072BE27  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0072BE2D  68 B2 00 00 00            PUSH 0xb2
0072BE32  68 C0 10 7F 00            PUSH 0x7f10c0
0072BE37  52                        PUSH EDX
0072BE38  57                        PUSH EDI
0072BE39  E8 02 A0 F7 FF            CALL 0x006a5e40
LAB_0072be3e:
0072BE3E  C7 86 80 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0x80],0x1
0072BE48  E9 74 FF FF FF            JMP 0x0072bdc1
LAB_0072be4d:
0072BE4D  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
0072BE53  85 C0                     TEST EAX,EAX
0072BE55  0F 85 3E 03 00 00         JNZ 0x0072c199
0072BE5B  8D 86 8C 00 00 00         LEA EAX,[ESI + 0x8c]
0072BE61  8B CE                     MOV ECX,ESI
0072BE63  50                        PUSH EAX
0072BE64  E8 77 A1 FB FF            CALL 0x006e5fe0
0072BE69  8B F8                     MOV EDI,EAX
0072BE6B  85 FF                     TEST EDI,EDI
0072BE6D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0072BE70  74 17                     JZ 0x0072be89
0072BE72  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0072BE78  68 BF 00 00 00            PUSH 0xbf
0072BE7D  68 C0 10 7F 00            PUSH 0x7f10c0
0072BE82  51                        PUSH ECX
LAB_0072be83:
0072BE83  57                        PUSH EDI
0072BE84  E8 B7 9F F7 FF            CALL 0x006a5e40
LAB_0072be89:
0072BE89  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0072BE8C  C7 86 D0 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0xd0],0x1
0072BE96  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072BE9C  8B C7                     MOV EAX,EDI
0072BE9E  5F                        POP EDI
0072BE9F  5E                        POP ESI
0072BEA0  5B                        POP EBX
0072BEA1  8B E5                     MOV ESP,EBP
0072BEA3  5D                        POP EBP
0072BEA4  C2 04 00                  RET 0x4
LAB_0072bea7:
0072BEA7  8B 86 80 00 00 00         MOV EAX,dword ptr [ESI + 0x80]
0072BEAD  33 DB                     XOR EBX,EBX
0072BEAF  3B C3                     CMP EAX,EBX
0072BEB1  74 42                     JZ 0x0072bef5
0072BEB3  39 5E 70                  CMP dword ptr [ESI + 0x70],EBX
0072BEB6  74 32                     JZ 0x0072beea
0072BEB8  8D 56 60                  LEA EDX,[ESI + 0x60]
0072BEBB  8B CE                     MOV ECX,ESI
0072BEBD  52                        PUSH EDX
0072BEBE  E8 1D A1 FB FF            CALL 0x006e5fe0
0072BEC3  8B F8                     MOV EDI,EAX
0072BEC5  3B FB                     CMP EDI,EBX
0072BEC7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0072BECA  74 21                     JZ 0x0072beed
0072BECC  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0072BED1  68 C6 00 00 00            PUSH 0xc6
0072BED6  68 C0 10 7F 00            PUSH 0x7f10c0
0072BEDB  50                        PUSH EAX
0072BEDC  57                        PUSH EDI
0072BEDD  E8 5E 9F F7 FF            CALL 0x006a5e40
0072BEE2  89 9E 80 00 00 00         MOV dword ptr [ESI + 0x80],EBX
0072BEE8  EB 0E                     JMP 0x0072bef8
LAB_0072beea:
0072BEEA  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0072beed:
0072BEED  89 9E 80 00 00 00         MOV dword ptr [ESI + 0x80],EBX
0072BEF3  EB 03                     JMP 0x0072bef8
LAB_0072bef5:
0072BEF5  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0072bef8:
0072BEF8  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
0072BEFE  89 9E 84 00 00 00         MOV dword ptr [ESI + 0x84],EBX
0072BF04  3B C3                     CMP EAX,EBX
0072BF06  74 3C                     JZ 0x0072bf44
0072BF08  39 9E C0 00 00 00         CMP dword ptr [ESI + 0xc0],EBX
0072BF0E  74 2E                     JZ 0x0072bf3e
0072BF10  8D 8E B0 00 00 00         LEA ECX,[ESI + 0xb0]
0072BF16  51                        PUSH ECX
0072BF17  8B CE                     MOV ECX,ESI
0072BF19  E8 C2 A0 FB FF            CALL 0x006e5fe0
0072BF1E  8B F8                     MOV EDI,EAX
0072BF20  3B FB                     CMP EDI,EBX
0072BF22  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0072BF25  74 17                     JZ 0x0072bf3e
0072BF27  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0072BF2D  68 CC 00 00 00            PUSH 0xcc
0072BF32  68 C0 10 7F 00            PUSH 0x7f10c0
0072BF37  52                        PUSH EDX
0072BF38  57                        PUSH EDI
0072BF39  E8 02 9F F7 FF            CALL 0x006a5e40
LAB_0072bf3e:
0072BF3E  89 9E D0 00 00 00         MOV dword ptr [ESI + 0xd0],EBX
LAB_0072bf44:
0072BF44  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0072BF47  89 9E D4 00 00 00         MOV dword ptr [ESI + 0xd4],EBX
0072BF4D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072BF53  8B C7                     MOV EAX,EDI
0072BF55  5F                        POP EDI
0072BF56  5E                        POP ESI
0072BF57  5B                        POP EBX
0072BF58  8B E5                     MOV ESP,EBP
0072BF5A  5D                        POP EBP
0072BF5B  C2 04 00                  RET 0x4
switchD_0072b7ce::caseD_0:
0072BF5E  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0072BF61  8B 1D DC BE 85 00         MOV EBX,dword ptr [0x0085bedc]
0072BF67  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
0072BF6A  85 C0                     TEST EAX,EAX
0072BF6C  74 5B                     JZ 0x0072bfc9
0072BF6E  8B 86 84 00 00 00         MOV EAX,dword ptr [ESI + 0x84]
0072BF74  85 C0                     TEST EAX,EAX
0072BF76  74 51                     JZ 0x0072bfc9
0072BF78  FF D3                     CALL EBX
0072BF7A  8B 4E 5C                  MOV ECX,dword ptr [ESI + 0x5c]
0072BF7D  8B BE 84 00 00 00         MOV EDI,dword ptr [ESI + 0x84]
0072BF83  03 CF                     ADD ECX,EDI
0072BF85  3B C1                     CMP EAX,ECX
0072BF87  72 40                     JC 0x0072bfc9
0072BF89  8B 86 80 00 00 00         MOV EAX,dword ptr [ESI + 0x80]
0072BF8F  85 C0                     TEST EAX,EAX
0072BF91  75 36                     JNZ 0x0072bfc9
0072BF93  8D 56 3C                  LEA EDX,[ESI + 0x3c]
0072BF96  8B CE                     MOV ECX,ESI
0072BF98  52                        PUSH EDX
0072BF99  E8 42 A0 FB FF            CALL 0x006e5fe0
0072BF9E  8B F8                     MOV EDI,EAX
0072BFA0  85 FF                     TEST EDI,EDI
0072BFA2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0072BFA5  74 16                     JZ 0x0072bfbd
0072BFA7  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0072BFAC  68 D6 00 00 00            PUSH 0xd6
0072BFB1  68 C0 10 7F 00            PUSH 0x7f10c0
0072BFB6  50                        PUSH EAX
0072BFB7  57                        PUSH EDI
0072BFB8  E8 83 9E F7 FF            CALL 0x006a5e40
LAB_0072bfbd:
0072BFBD  C7 86 80 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0x80],0x1
0072BFC7  EB 03                     JMP 0x0072bfcc
LAB_0072bfc9:
0072BFC9  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0072bfcc:
0072BFCC  8B 86 AC 00 00 00         MOV EAX,dword ptr [ESI + 0xac]
0072BFD2  85 C0                     TEST EAX,EAX
0072BFD4  0F 84 BF 01 00 00         JZ 0x0072c199
0072BFDA  8B 86 D4 00 00 00         MOV EAX,dword ptr [ESI + 0xd4]
0072BFE0  85 C0                     TEST EAX,EAX
0072BFE2  0F 84 B1 01 00 00         JZ 0x0072c199
0072BFE8  FF D3                     CALL EBX
0072BFEA  8B 8E AC 00 00 00         MOV ECX,dword ptr [ESI + 0xac]
0072BFF0  8B 9E D4 00 00 00         MOV EBX,dword ptr [ESI + 0xd4]
0072BFF6  03 CB                     ADD ECX,EBX
0072BFF8  3B C1                     CMP EAX,ECX
0072BFFA  0F 82 99 01 00 00         JC 0x0072c199
0072C000  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
0072C006  85 C0                     TEST EAX,EAX
0072C008  0F 85 8B 01 00 00         JNZ 0x0072c199
0072C00E  8D 96 8C 00 00 00         LEA EDX,[ESI + 0x8c]
0072C014  8B CE                     MOV ECX,ESI
0072C016  52                        PUSH EDX
0072C017  E8 C4 9F FB FF            CALL 0x006e5fe0
0072C01C  8B F8                     MOV EDI,EAX
0072C01E  85 FF                     TEST EDI,EDI
0072C020  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0072C023  0F 84 60 FE FF FF         JZ 0x0072be89
0072C029  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0072C02E  68 DA 00 00 00            PUSH 0xda
0072C033  68 C0 10 7F 00            PUSH 0x7f10c0
0072C038  50                        PUSH EAX
0072C039  E9 45 FE FF FF            JMP 0x0072be83
switchD_0072b7ce::caseD_24:
0072C03E  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0072C041  BB 00 00 00 70            MOV EBX,0x70000000
0072C046  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0072C049  A9 00 00 00 80            TEST EAX,0x80000000
0072C04E  74 11                     JZ 0x0072c061
0072C050  25 FF FF FF 7F            AND EAX,0x7fffffff
0072C055  C7 46 18 00 00 00 00      MOV dword ptr [ESI + 0x18],0x0
0072C05C  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0072C05F  EB 23                     JMP 0x0072c084
LAB_0072c061:
0072C061  85 C3                     TEST EBX,EAX
0072C063  75 1F                     JNZ 0x0072c084
0072C065  8D 4E 24                  LEA ECX,[ESI + 0x24]
0072C068  8D 55 D8                  LEA EDX,[EBP + -0x28]
0072C06B  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0072C06E  52                        PUSH EDX
0072C06F  8B CE                     MOV ECX,ESI
0072C071  C7 45 E4 0F 00 00 00      MOV dword ptr [EBP + -0x1c],0xf
0072C078  C7 45 E8 07 00 00 00      MOV dword ptr [EBP + -0x18],0x7
0072C07F  E8 5C 9F FB FF            CALL 0x006e5fe0
LAB_0072c084:
0072C084  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
0072C087  83 F8 24                  CMP EAX,0x24
0072C08A  74 23                     JZ 0x0072c0af
0072C08C  83 F8 53                  CMP EAX,0x53
0072C08F  75 36                     JNZ 0x0072c0c7
0072C091  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
0072C094  8D 4E 24                  LEA ECX,[ESI + 0x24]
0072C097  8B 10                     MOV EDX,dword ptr [EAX]
0072C099  89 11                     MOV dword ptr [ECX],EDX
0072C09B  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0072C09E  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
0072C0A1  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0072C0A4  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
0072C0A7  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0072C0AA  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0072C0AD  EB 18                     JMP 0x0072c0c7
LAB_0072c0af:
0072C0AF  0F BF 4F 14               MOVSX ECX,word ptr [EDI + 0x14]
0072C0B3  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
0072C0B6  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
0072C0B9  03 D1                     ADD EDX,ECX
0072C0BB  89 56 24                  MOV dword ptr [ESI + 0x24],EDX
0072C0BE  0F BF 57 16               MOVSX EDX,word ptr [EDI + 0x16]
0072C0C2  03 C2                     ADD EAX,EDX
0072C0C4  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
LAB_0072c0c7:
0072C0C7  85 5E 1C                  TEST dword ptr [ESI + 0x1c],EBX
0072C0CA  75 26                     JNZ 0x0072c0f2
0072C0CC  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
0072C0CF  85 C0                     TEST EAX,EAX
0072C0D1  74 1F                     JZ 0x0072c0f2
0072C0D3  8D 4D D8                  LEA ECX,[EBP + -0x28]
0072C0D6  8D 46 24                  LEA EAX,[ESI + 0x24]
0072C0D9  51                        PUSH ECX
0072C0DA  8B CE                     MOV ECX,ESI
0072C0DC  C7 45 E4 0F 00 00 00      MOV dword ptr [EBP + -0x1c],0xf
0072C0E3  C7 45 E8 06 00 00 00      MOV dword ptr [EBP + -0x18],0x6
0072C0EA  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0072C0ED  E8 EE 9E FB FF            CALL 0x006e5fe0
LAB_0072c0f2:
0072C0F2  B9 08 00 00 00            MOV ECX,0x8
0072C0F7  33 C0                     XOR EAX,EAX
0072C0F9  8D 7D D8                  LEA EDI,[EBP + -0x28]
0072C0FC  8D 55 D8                  LEA EDX,[EBP + -0x28]
0072C0FF  F3 AB                     STOSD.REP ES:EDI
0072C101  52                        PUSH EDX
0072C102  8B CE                     MOV ECX,ESI
0072C104  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
0072C10B  C7 45 E4 03 00 00 00      MOV dword ptr [EBP + -0x1c],0x3
0072C112  C7 45 E8 15 00 00 00      MOV dword ptr [EBP + -0x18],0x15
0072C119  E8 C2 9E FB FF            CALL 0x006e5fe0
0072C11E  85 C0                     TEST EAX,EAX
0072C120  75 74                     JNZ 0x0072c196
0072C122  8D 4D D8                  LEA ECX,[EBP + -0x28]
0072C125  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0072C128  8B 06                     MOV EAX,dword ptr [ESI]
0072C12A  51                        PUSH ECX
0072C12B  8B CE                     MOV ECX,ESI
0072C12D  C7 45 E8 60 00 00 00      MOV dword ptr [EBP + -0x18],0x60
0072C134  FF 10                     CALL dword ptr [EAX]
0072C136  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0072C139  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0072C13C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072C142  8B C7                     MOV EAX,EDI
0072C144  5F                        POP EDI
0072C145  5E                        POP ESI
0072C146  5B                        POP EBX
0072C147  8B E5                     MOV ESP,EBP
0072C149  5D                        POP EBP
0072C14A  C2 04 00                  RET 0x4
switchD_0072b7ce::caseD_21:
0072C14D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0072C150  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
0072C153  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0072C156  89 47 14                  MOV dword ptr [EDI + 0x14],EAX
0072C159  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0072C15C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072C162  8B C7                     MOV EAX,EDI
0072C164  5F                        POP EDI
0072C165  5E                        POP ESI
0072C166  5B                        POP EBX
0072C167  8B E5                     MOV ESP,EBP
0072C169  5D                        POP EBP
0072C16A  C2 04 00                  RET 0x4
switchD_0072b7ce::caseD_2a:
0072C16D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0072C170  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0072C173  83 C1 24                  ADD ECX,0x24
0072C176  89 4F 14                  MOV dword ptr [EDI + 0x14],ECX
0072C179  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0072C17C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072C182  8B C7                     MOV EAX,EDI
0072C184  5F                        POP EDI
0072C185  5E                        POP ESI
0072C186  5B                        POP EBX
0072C187  8B E5                     MOV ESP,EBP
0072C189  5D                        POP EBP
0072C18A  C2 04 00                  RET 0x4
switchD_0072b7ce::caseD_1:
0072C18D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0072C190  57                        PUSH EDI
0072C191  E8 3A 9E FB FF            CALL 0x006e5fd0
LAB_0072c196:
0072C196  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0072c199:
0072C199  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0072C19C  8B C7                     MOV EAX,EDI
0072C19E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0072C1A4  5F                        POP EDI
0072C1A5  5E                        POP ESI
0072C1A6  5B                        POP EBX
0072C1A7  8B E5                     MOV ESP,EBP
0072C1A9  5D                        POP EBP
0072C1AA  C2 04 00                  RET 0x4
LAB_0072c1ad:
0072C1AD  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
0072C1B0  68 9C 10 7F 00            PUSH 0x7f109c
0072C1B5  68 CC 4C 7A 00            PUSH 0x7a4ccc
0072C1BA  50                        PUSH EAX
0072C1BB  53                        PUSH EBX
0072C1BC  68 0A 01 00 00            PUSH 0x10a
0072C1C1  68 C0 10 7F 00            PUSH 0x7f10c0
0072C1C6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0072C1CC  E8 FF 12 F8 FF            CALL 0x006ad4d0
0072C1D1  83 C4 18                  ADD ESP,0x18
0072C1D4  85 C0                     TEST EAX,EAX
0072C1D6  74 01                     JZ 0x0072c1d9
0072C1D8  CC                        INT3
LAB_0072c1d9:
0072C1D9  68 0B 01 00 00            PUSH 0x10b
0072C1DE  68 C0 10 7F 00            PUSH 0x7f10c0
0072C1E3  53                        PUSH EBX
0072C1E4  68 FF FF 00 00            PUSH 0xffff
0072C1E9  E8 52 9C F7 FF            CALL 0x006a5e40
0072C1EE  5F                        POP EDI
0072C1EF  5E                        POP ESI
0072C1F0  B8 FF FF 00 00            MOV EAX,0xffff
0072C1F5  5B                        POP EBX
0072C1F6  8B E5                     MOV ESP,EBP
0072C1F8  5D                        POP EBP
0072C1F9  C2 04 00                  RET 0x4
