FUN_005c4930:
005C4930  55                        PUSH EBP
005C4931  8B EC                     MOV EBP,ESP
005C4933  83 EC 48                  SUB ESP,0x48
005C4936  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C493B  53                        PUSH EBX
005C493C  56                        PUSH ESI
005C493D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005C4940  33 DB                     XOR EBX,EBX
005C4942  57                        PUSH EDI
005C4943  8D 55 BC                  LEA EDX,[EBP + -0x44]
005C4946  8D 4D B8                  LEA ECX,[EBP + -0x48]
005C4949  53                        PUSH EBX
005C494A  52                        PUSH EDX
005C494B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005C494E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C4954  E8 97 8E 16 00            CALL 0x0072d7f0
005C4959  8B F0                     MOV ESI,EAX
005C495B  83 C4 08                  ADD ESP,0x8
005C495E  3B F3                     CMP ESI,EBX
005C4960  0F 85 73 03 00 00         JNZ 0x005c4cd9
005C4966  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005C4969  8B CE                     MOV ECX,ESI
005C496B  E8 1E FC E3 FF            CALL 0x0040458e
005C4970  8B 86 3F 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f3f]
005C4976  3B C3                     CMP EAX,EBX
005C4978  74 09                     JZ 0x005c4983
005C497A  50                        PUSH EAX
005C497B  E8 F0 C7 12 00            CALL 0x006f1170
005C4980  83 C4 04                  ADD ESP,0x4
LAB_005c4983:
005C4983  8B 86 43 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f43]
005C4989  89 9E 3F 1F 00 00         MOV dword ptr [ESI + 0x1f3f],EBX
005C498F  3B C3                     CMP EAX,EBX
005C4991  74 09                     JZ 0x005c499c
005C4993  50                        PUSH EAX
005C4994  E8 D7 C7 12 00            CALL 0x006f1170
005C4999  83 C4 04                  ADD ESP,0x4
LAB_005c499c:
005C499C  89 9E 43 1F 00 00         MOV dword ptr [ESI + 0x1f43],EBX
005C49A2  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005C49A7  3B C3                     CMP EAX,EBX
005C49A9  74 28                     JZ 0x005c49d3
005C49AB  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
005C49B1  74 14                     JZ 0x005c49c7
005C49B3  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005C49B6  83 F9 FF                  CMP ECX,-0x1
005C49B9  74 18                     JZ 0x005c49d3
005C49BB  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005C49BE  51                        PUSH ECX
005C49BF  50                        PUSH EAX
005C49C0  E8 2B F1 0E 00            CALL 0x006b3af0
005C49C5  EB 0C                     JMP 0x005c49d3
LAB_005c49c7:
005C49C7  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005C49CD  51                        PUSH ECX
005C49CE  E8 3D 41 0F 00            CALL 0x006b8b10
LAB_005c49d3:
005C49D3  8B 46 4D                  MOV EAX,dword ptr [ESI + 0x4d]
005C49D6  3D 1F 61 00 00            CMP EAX,0x611f
005C49DB  74 21                     JZ 0x005c49fe
005C49DD  3D 09 61 00 00            CMP EAX,0x6109
005C49E2  74 1A                     JZ 0x005c49fe
005C49E4  3D 05 61 00 00            CMP EAX,0x6105
005C49E9  74 13                     JZ 0x005c49fe
005C49EB  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005C49F1  6A 02                     PUSH 0x2
005C49F3  6A 0A                     PUSH 0xa
005C49F5  52                        PUSH EDX
005C49F6  E8 48 D3 E3 FF            CALL 0x00401d43
005C49FB  83 C4 0C                  ADD ESP,0xc
LAB_005c49fe:
005C49FE  8B 8E EC 21 00 00         MOV ECX,dword ptr [ESI + 0x21ec]
005C4A04  3B CB                     CMP ECX,EBX
005C4A06  74 1A                     JZ 0x005c4a22
005C4A08  E8 7D C8 E3 FF            CALL 0x0040128a
005C4A0D  8B 86 EC 21 00 00         MOV EAX,dword ptr [ESI + 0x21ec]
005C4A13  50                        PUSH EAX
005C4A14  E8 97 98 16 00            CALL 0x0072e2b0
005C4A19  83 C4 04                  ADD ESP,0x4
005C4A1C  89 9E EC 21 00 00         MOV dword ptr [ESI + 0x21ec],EBX
LAB_005c4a22:
005C4A22  8A 86 E2 21 00 00         MOV AL,byte ptr [ESI + 0x21e2]
005C4A28  84 C0                     TEST AL,AL
005C4A2A  74 77                     JZ 0x005c4aa3
005C4A2C  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C4A32  8B 81 91 03 00 00         MOV EAX,dword ptr [ECX + 0x391]
005C4A38  83 F8 FF                  CMP EAX,-0x1
005C4A3B  74 0D                     JZ 0x005c4a4a
005C4A3D  8B 89 D5 03 00 00         MOV ECX,dword ptr [ECX + 0x3d5]
005C4A43  50                        PUSH EAX
005C4A44  51                        PUSH ECX
005C4A45  E8 A6 F0 0E 00            CALL 0x006b3af0
LAB_005c4a4a:
005C4A4A  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C4A50  8B 81 22 04 00 00         MOV EAX,dword ptr [ECX + 0x422]
005C4A56  83 F8 FF                  CMP EAX,-0x1
005C4A59  74 0D                     JZ 0x005c4a68
005C4A5B  8B 91 66 04 00 00         MOV EDX,dword ptr [ECX + 0x466]
005C4A61  50                        PUSH EAX
005C4A62  52                        PUSH EDX
005C4A63  E8 88 F0 0E 00            CALL 0x006b3af0
LAB_005c4a68:
005C4A68  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C4A6E  8B 81 B3 04 00 00         MOV EAX,dword ptr [ECX + 0x4b3]
005C4A74  83 F8 FF                  CMP EAX,-0x1
005C4A77  74 0D                     JZ 0x005c4a86
005C4A79  50                        PUSH EAX
005C4A7A  8B 81 F7 04 00 00         MOV EAX,dword ptr [ECX + 0x4f7]
005C4A80  50                        PUSH EAX
005C4A81  E8 6A F0 0E 00            CALL 0x006b3af0
LAB_005c4a86:
005C4A86  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C4A8C  8B 81 40 05 00 00         MOV EAX,dword ptr [ECX + 0x540]
005C4A92  3B C3                     CMP EAX,EBX
005C4A94  7C 0D                     JL 0x005c4aa3
005C4A96  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C4A9C  50                        PUSH EAX
005C4A9D  52                        PUSH EDX
005C4A9E  E8 4D F0 0E 00            CALL 0x006b3af0
LAB_005c4aa3:
005C4AA3  8B 8E F4 21 00 00         MOV ECX,dword ptr [ESI + 0x21f4]
005C4AA9  3B CB                     CMP ECX,EBX
005C4AAB  74 1A                     JZ 0x005c4ac7
005C4AAD  E8 D8 C7 E3 FF            CALL 0x0040128a
005C4AB2  8B 86 F4 21 00 00         MOV EAX,dword ptr [ESI + 0x21f4]
005C4AB8  50                        PUSH EAX
005C4AB9  E8 F2 97 16 00            CALL 0x0072e2b0
005C4ABE  83 C4 04                  ADD ESP,0x4
005C4AC1  89 9E F4 21 00 00         MOV dword ptr [ESI + 0x21f4],EBX
LAB_005c4ac7:
005C4AC7  8B 8E E8 21 00 00         MOV ECX,dword ptr [ESI + 0x21e8]
005C4ACD  3B CB                     CMP ECX,EBX
005C4ACF  74 1A                     JZ 0x005c4aeb
005C4AD1  E8 B4 C7 E3 FF            CALL 0x0040128a
005C4AD6  8B 8E E8 21 00 00         MOV ECX,dword ptr [ESI + 0x21e8]
005C4ADC  51                        PUSH ECX
005C4ADD  E8 CE 97 16 00            CALL 0x0072e2b0
005C4AE2  83 C4 04                  ADD ESP,0x4
005C4AE5  89 9E E8 21 00 00         MOV dword ptr [ESI + 0x21e8],EBX
LAB_005c4aeb:
005C4AEB  8B 8E F0 21 00 00         MOV ECX,dword ptr [ESI + 0x21f0]
005C4AF1  3B CB                     CMP ECX,EBX
005C4AF3  74 1A                     JZ 0x005c4b0f
005C4AF5  E8 90 C7 E3 FF            CALL 0x0040128a
005C4AFA  8B 96 F0 21 00 00         MOV EDX,dword ptr [ESI + 0x21f0]
005C4B00  52                        PUSH EDX
005C4B01  E8 AA 97 16 00            CALL 0x0072e2b0
005C4B06  83 C4 04                  ADD ESP,0x4
005C4B09  89 9E F0 21 00 00         MOV dword ptr [ESI + 0x21f0],EBX
LAB_005c4b0f:
005C4B0F  8B 8E F8 21 00 00         MOV ECX,dword ptr [ESI + 0x21f8]
005C4B15  3B CB                     CMP ECX,EBX
005C4B17  74 1A                     JZ 0x005c4b33
005C4B19  E8 6C C7 E3 FF            CALL 0x0040128a
005C4B1E  8B 86 F8 21 00 00         MOV EAX,dword ptr [ESI + 0x21f8]
005C4B24  50                        PUSH EAX
005C4B25  E8 86 97 16 00            CALL 0x0072e2b0
005C4B2A  83 C4 04                  ADD ESP,0x4
005C4B2D  89 9E F8 21 00 00         MOV dword ptr [ESI + 0x21f8],EBX
LAB_005c4b33:
005C4B33  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C4B39  8D 41 2C                  LEA EAX,[ECX + 0x2c]
005C4B3C  8B 49 2C                  MOV ECX,dword ptr [ECX + 0x2c]
005C4B3F  3B CB                     CMP ECX,EBX
005C4B41  74 0C                     JZ 0x005c4b4f
005C4B43  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005C4B49  50                        PUSH EAX
005C4B4A  E8 91 D5 12 00            CALL 0x006f20e0
LAB_005c4b4f:
005C4B4F  8B 8E 2B 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e2b]
005C4B55  8D 86 2B 1E 00 00         LEA EAX,[ESI + 0x1e2b]
005C4B5B  3B CB                     CMP ECX,EBX
005C4B5D  74 0C                     JZ 0x005c4b6b
005C4B5F  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005C4B65  50                        PUSH EAX
005C4B66  E8 75 D5 12 00            CALL 0x006f20e0
LAB_005c4b6b:
005C4B6B  8B 8E 67 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c67]
005C4B71  8D 86 67 1C 00 00         LEA EAX,[ESI + 0x1c67]
005C4B77  3B CB                     CMP ECX,EBX
005C4B79  74 06                     JZ 0x005c4b81
005C4B7B  50                        PUSH EAX
005C4B7C  E8 DF 64 0E 00            CALL 0x006ab060
LAB_005c4b81:
005C4B81  89 1D 5C 17 81 00         MOV dword ptr [0x0081175c],EBX
005C4B87  8B 86 7C 1F 00 00         MOV EAX,dword ptr [ESI + 0x1f7c]
005C4B8D  3B C3                     CMP EAX,EBX
005C4B8F  74 06                     JZ 0x005c4b97
005C4B91  50                        PUSH EAX
005C4B92  E8 79 95 0E 00            CALL 0x006ae110
LAB_005c4b97:
005C4B97  8B 8E 84 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f84]
005C4B9D  89 9E 7C 1F 00 00         MOV dword ptr [ESI + 0x1f7c],EBX
005C4BA3  3B CB                     CMP ECX,EBX
005C4BA5  74 4D                     JZ 0x005c4bf4
005C4BA7  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005C4BAA  33 FF                     XOR EDI,EDI
005C4BAC  3B C3                     CMP EAX,EBX
005C4BAE  7E 32                     JLE 0x005c4be2
005C4BB0  3B F8                     CMP EDI,EAX
LAB_005c4bb2:
005C4BB2  73 0D                     JNC 0x005c4bc1
005C4BB4  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005C4BB7  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005C4BBA  0F AF C7                  IMUL EAX,EDI
005C4BBD  03 C2                     ADD EAX,EDX
005C4BBF  EB 02                     JMP 0x005c4bc3
LAB_005c4bc1:
005C4BC1  33 C0                     XOR EAX,EAX
LAB_005c4bc3:
005C4BC3  3B C3                     CMP EAX,EBX
005C4BC5  74 0D                     JZ 0x005c4bd4
005C4BC7  8B 40 50                  MOV EAX,dword ptr [EAX + 0x50]
005C4BCA  3B C3                     CMP EAX,EBX
005C4BCC  74 06                     JZ 0x005c4bd4
005C4BCE  50                        PUSH EAX
005C4BCF  E8 3C 95 0E 00            CALL 0x006ae110
LAB_005c4bd4:
005C4BD4  8B 8E 84 1F 00 00         MOV ECX,dword ptr [ESI + 0x1f84]
005C4BDA  47                        INC EDI
005C4BDB  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005C4BDE  3B F8                     CMP EDI,EAX
005C4BE0  7C D0                     JL 0x005c4bb2
LAB_005c4be2:
005C4BE2  8B 96 84 1F 00 00         MOV EDX,dword ptr [ESI + 0x1f84]
005C4BE8  52                        PUSH EDX
005C4BE9  E8 22 95 0E 00            CALL 0x006ae110
005C4BEE  89 9E 84 1F 00 00         MOV dword ptr [ESI + 0x1f84],EBX
LAB_005c4bf4:
005C4BF4  8B 86 2F 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e2f]
005C4BFA  3B C3                     CMP EAX,EBX
005C4BFC  74 06                     JZ 0x005c4c04
005C4BFE  50                        PUSH EAX
005C4BFF  E8 0C 95 0E 00            CALL 0x006ae110
LAB_005c4c04:
005C4C04  8D 8E 6B 1C 00 00         LEA ECX,[ESI + 0x1c6b]
005C4C0A  89 9E 2F 1E 00 00         MOV dword ptr [ESI + 0x1e2f],EBX
005C4C10  E8 9B 0E 15 00            CALL 0x00715ab0
005C4C15  8D 8E FC 1C 00 00         LEA ECX,[ESI + 0x1cfc]
005C4C1B  E8 90 0E 15 00            CALL 0x00715ab0
005C4C20  8D 8E 8D 1D 00 00         LEA ECX,[ESI + 0x1d8d]
005C4C26  E8 85 0E 15 00            CALL 0x00715ab0
005C4C2B  8D BE F4 20 00 00         LEA EDI,[ESI + 0x20f4]
005C4C31  BB 0A 00 00 00            MOV EBX,0xa
LAB_005c4c36:
005C4C36  8B 47 D8                  MOV EAX,dword ptr [EDI + -0x28]
005C4C39  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C4C3F  50                        PUSH EAX
005C4C40  51                        PUSH ECX
005C4C41  E8 6A EF 0E 00            CALL 0x006b3bb0
005C4C46  83 3F 00                  CMP dword ptr [EDI],0x0
005C4C49  74 06                     JZ 0x005c4c51
005C4C4B  57                        PUSH EDI
005C4C4C  E8 0F 64 0E 00            CALL 0x006ab060
LAB_005c4c51:
005C4C51  83 C7 04                  ADD EDI,0x4
005C4C54  4B                        DEC EBX
005C4C55  75 DF                     JNZ 0x005c4c36
005C4C57  8B 8E 1E 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e1e]
005C4C5D  8D 86 1E 1E 00 00         LEA EAX,[ESI + 0x1e1e]
005C4C63  85 C9                     TEST ECX,ECX
005C4C65  74 06                     JZ 0x005c4c6d
005C4C67  50                        PUSH EAX
005C4C68  E8 F3 63 0E 00            CALL 0x006ab060
LAB_005c4c6d:
005C4C6D  8B 96 22 1E 00 00         MOV EDX,dword ptr [ESI + 0x1e22]
005C4C73  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005C4C78  52                        PUSH EDX
005C4C79  50                        PUSH EAX
005C4C7A  E8 31 EF 0E 00            CALL 0x006b3bb0
005C4C7F  8A 86 E7 21 00 00         MOV AL,byte ptr [ESI + 0x21e7]
005C4C85  84 C0                     TEST AL,AL
005C4C87  74 2B                     JZ 0x005c4cb4
005C4C89  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005C4C8F  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005C4C95  85 C9                     TEST ECX,ECX
005C4C97  74 1B                     JZ 0x005c4cb4
005C4C99  E8 90 F9 E3 FF            CALL 0x0040462e
005C4C9E  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005C4CA4  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005C4CAA  C7 80 AB 1C 00 00 00 00 00 00  MOV dword ptr [EAX + 0x1cab],0x0
LAB_005c4cb4:
005C4CB4  8B 46 4D                  MOV EAX,dword ptr [ESI + 0x4d]
005C4CB7  85 C0                     TEST EAX,EAX
005C4CB9  74 0E                     JZ 0x005c4cc9
005C4CBB  83 C6 3D                  ADD ESI,0x3d
005C4CBE  B9 20 76 80 00            MOV ECX,0x807620
005C4CC3  56                        PUSH ESI
005C4CC4  E8 87 EE 11 00            CALL 0x006e3b50
LAB_005c4cc9:
005C4CC9  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005C4CCC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C4CD2  5F                        POP EDI
005C4CD3  5E                        POP ESI
005C4CD4  5B                        POP EBX
005C4CD5  8B E5                     MOV ESP,EBP
005C4CD7  5D                        POP EBP
005C4CD8  C3                        RET
LAB_005c4cd9:
005C4CD9  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005C4CDC  68 70 D1 7C 00            PUSH 0x7cd170
005C4CE1  68 CC 4C 7A 00            PUSH 0x7a4ccc
005C4CE6  56                        PUSH ESI
005C4CE7  53                        PUSH EBX
005C4CE8  68 CE 01 00 00            PUSH 0x1ce
005C4CED  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C4CF2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005C4CF8  E8 D3 87 0E 00            CALL 0x006ad4d0
005C4CFD  83 C4 18                  ADD ESP,0x18
005C4D00  85 C0                     TEST EAX,EAX
005C4D02  74 01                     JZ 0x005c4d05
005C4D04  CC                        INT3
LAB_005c4d05:
005C4D05  68 CE 01 00 00            PUSH 0x1ce
005C4D0A  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C4D0F  53                        PUSH EBX
005C4D10  56                        PUSH ESI
005C4D11  E8 2A 11 0E 00            CALL 0x006a5e40
005C4D16  5F                        POP EDI
005C4D17  5E                        POP ESI
005C4D18  5B                        POP EBX
005C4D19  8B E5                     MOV ESP,EBP
005C4D1B  5D                        POP EBP
005C4D1C  C3                        RET
