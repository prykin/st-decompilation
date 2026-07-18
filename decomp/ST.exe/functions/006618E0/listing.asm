FUN_006618e0:
006618E0  55                        PUSH EBP
006618E1  8B EC                     MOV EBP,ESP
006618E3  83 EC 64                  SUB ESP,0x64
006618E6  53                        PUSH EBX
006618E7  56                        PUSH ESI
006618E8  8B F1                     MOV ESI,ECX
006618EA  33 DB                     XOR EBX,EBX
006618EC  57                        PUSH EDI
006618ED  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
006618F0  8B 86 03 02 00 00         MOV EAX,dword ptr [ESI + 0x203]
006618F6  3B C3                     CMP EAX,EBX
006618F8  74 16                     JZ 0x00661910
006618FA  8B 8E 07 02 00 00         MOV ECX,dword ptr [ESI + 0x207]
00661900  03 C8                     ADD ECX,EAX
00661902  8B 86 80 02 00 00         MOV EAX,dword ptr [ESI + 0x280]
00661908  3B C1                     CMP EAX,ECX
0066190A  0F 82 BF 02 00 00         JC 0x00661bcf
LAB_00661910:
00661910  8B 96 80 02 00 00         MOV EDX,dword ptr [ESI + 0x280]
00661916  8B CE                     MOV ECX,ESI
00661918  89 96 07 02 00 00         MOV dword ptr [ESI + 0x207],EDX
0066191E  E8 18 1B DA FF            CALL 0x0040343b
00661923  8B F8                     MOV EDI,EAX
00661925  3B FB                     CMP EDI,EBX
00661927  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0066192A  0F 8E 9F 02 00 00         JLE 0x00661bcf
00661930  8B CE                     MOV ECX,ESI
00661932  E8 AE 3E DA FF            CALL 0x004057e5
00661937  0F BF 8E 79 01 00 00      MOVSX ECX,word ptr [ESI + 0x179]
0066193E  2B F8                     SUB EDI,EAX
00661940  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00661943  3B F9                     CMP EDI,ECX
00661945  0F 8E 84 02 00 00         JLE 0x00661bcf
0066194B  66 8B 56 7B               MOV DX,word ptr [ESI + 0x7b]
0066194F  8B 8E 84 02 00 00         MOV ECX,dword ptr [ESI + 0x284]
00661955  52                        PUSH EDX
00661956  E8 DA 2A DA FF            CALL 0x00404435
0066195B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0066195E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00661963  8D 55 A0                  LEA EDX,[EBP + -0x60]
00661966  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00661969  53                        PUSH EBX
0066196A  52                        PUSH EDX
0066196B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0066196E  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00661971  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00661974  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0066197A  E8 71 BE 0C 00            CALL 0x0072d7f0
0066197F  8B F0                     MOV ESI,EAX
00661981  83 C4 08                  ADD ESP,0x8
00661984  3B F3                     CMP ESI,EBX
00661986  0F 85 E6 01 00 00         JNZ 0x00661b72
0066198C  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0066198F  8B CF                     MOV ECX,EDI
00661991  E8 39 FF D9 FF            CALL 0x004018cf
00661996  8B C8                     MOV ECX,EAX
00661998  3B CB                     CMP ECX,EBX
0066199A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0066199D  0F 84 C0 01 00 00         JZ 0x00661b63
006619A3  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006619A6  33 D2                     XOR EDX,EDX
006619A8  3B C3                     CMP EAX,EBX
006619AA  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006619AD  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006619B0  0F 8E 7F 01 00 00         JLE 0x00661b35
006619B6  EB 03                     JMP 0x006619bb
LAB_006619b8:
006619B8  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
LAB_006619bb:
006619BB  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
006619BE  73 0B                     JNC 0x006619cb
006619C0  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006619C3  0F AF C2                  IMUL EAX,EDX
006619C6  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
006619C9  EB 02                     JMP 0x006619cd
LAB_006619cb:
006619CB  33 C0                     XOR EAX,EAX
LAB_006619cd:
006619CD  66 8B 00                  MOV AX,word ptr [EAX]
006619D0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006619D6  6A 01                     PUSH 0x1
006619D8  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006619DB  50                        PUSH EAX
006619DC  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
006619DF  50                        PUSH EAX
006619E0  E8 D5 0E DA FF            CALL 0x004028ba
006619E5  8B F0                     MOV ESI,EAX
006619E7  85 F6                     TEST ESI,ESI
006619E9  0F 84 2F 01 00 00         JZ 0x00661b1e
006619EF  0F BF 8F 79 01 00 00      MOVSX ECX,word ptr [EDI + 0x179]
006619F6  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006619F9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006619FC  2B D0                     SUB EDX,EAX
006619FE  3B D1                     CMP EDX,ECX
00661A00  0F 8E 18 01 00 00         JLE 0x00661b1e
00661A06  8B 06                     MOV EAX,dword ptr [ESI]
00661A08  8B CE                     MOV ECX,ESI
00661A0A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00661A0D  50                        PUSH EAX
00661A0E  E8 F8 26 DA FF            CALL 0x0040410b
00661A13  8B 8F 7F 01 00 00         MOV ECX,dword ptr [EDI + 0x17f]
00661A19  83 C4 04                  ADD ESP,0x4
00661A1C  85 C1                     TEST ECX,EAX
00661A1E  0F 84 FA 00 00 00         JZ 0x00661b1e
00661A24  66 83 7F 39 03            CMP word ptr [EDI + 0x39],0x3
00661A29  75 0C                     JNZ 0x00661a37
00661A2B  8B 16                     MOV EDX,dword ptr [ESI]
00661A2D  8B CE                     MOV ECX,ESI
00661A2F  FF 92 C4 00 00 00         CALL dword ptr [EDX + 0xc4]
00661A35  EB 07                     JMP 0x00661a3e
LAB_00661a37:
00661A37  8B 06                     MOV EAX,dword ptr [ESI]
00661A39  8B CE                     MOV ECX,ESI
00661A3B  FF 50 7C                  CALL dword ptr [EAX + 0x7c]
LAB_00661a3e:
00661A3E  0F BF 8F 77 01 00 00      MOVSX ECX,word ptr [EDI + 0x177]
00661A45  3B C1                     CMP EAX,ECX
00661A47  0F 8D D1 00 00 00         JGE 0x00661b1e
00661A4D  8B 16                     MOV EDX,dword ptr [ESI]
00661A4F  8B CE                     MOV ECX,ESI
00661A51  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00661A54  83 F8 32                  CMP EAX,0x32
00661A57  7C 0C                     JL 0x00661a65
00661A59  83 F8 74                  CMP EAX,0x74
00661A5C  7D 07                     JGE 0x00661a65
00661A5E  B8 01 00 00 00            MOV EAX,0x1
00661A63  EB 02                     JMP 0x00661a67
LAB_00661a65:
00661A65  33 C0                     XOR EAX,EAX
LAB_00661a67:
00661A67  85 C0                     TEST EAX,EAX
00661A69  74 6C                     JZ 0x00661ad7
00661A6B  66 83 7F 39 03            CMP word ptr [EDI + 0x39],0x3
00661A70  74 24                     JZ 0x00661a96
00661A72  83 BE 61 03 00 00 05      CMP dword ptr [ESI + 0x361],0x5
00661A79  75 07                     JNZ 0x00661a82
00661A7B  B8 01 00 00 00            MOV EAX,0x1
00661A80  EB 16                     JMP 0x00661a98
LAB_00661a82:
00661A82  6A 05                     PUSH 0x5
00661A84  8B CE                     MOV ECX,ESI
00661A86  E8 3E 2C DA FF            CALL 0x004046c9
00661A8B  85 C0                     TEST EAX,EAX
00661A8D  7E 07                     JLE 0x00661a96
00661A8F  B8 01 00 00 00            MOV EAX,0x1
00661A94  EB 02                     JMP 0x00661a98
LAB_00661a96:
00661A96  33 C0                     XOR EAX,EAX
LAB_00661a98:
00661A98  85 C0                     TEST EAX,EAX
00661A9A  75 3B                     JNZ 0x00661ad7
00661A9C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00661A9F  85 C0                     TEST EAX,EAX
00661AA1  75 07                     JNZ 0x00661aaa
00661AA3  66 83 7F 39 03            CMP word ptr [EDI + 0x39],0x3
00661AA8  74 2A                     JZ 0x00661ad4
LAB_00661aaa:
00661AAA  66 83 7F 39 03            CMP word ptr [EDI + 0x39],0x3
00661AAF  75 09                     JNZ 0x00661aba
00661AB1  8B CE                     MOV ECX,ESI
00661AB3  E8 13 43 DA FF            CALL 0x00405dcb
00661AB8  EB 1A                     JMP 0x00661ad4
LAB_00661aba:
00661ABA  6A 00                     PUSH 0x0
00661ABC  68 FF 00 00 00            PUSH 0xff
00661AC1  6A 00                     PUSH 0x0
00661AC3  6A FF                     PUSH -0x1
00661AC5  6A 01                     PUSH 0x1
00661AC7  6A 01                     PUSH 0x1
00661AC9  6A 00                     PUSH 0x0
00661ACB  6A 05                     PUSH 0x5
00661ACD  8B CE                     MOV ECX,ESI
00661ACF  E8 85 3C DA FF            CALL 0x00405759
LAB_00661ad4:
00661AD4  FF 45 F8                  INC dword ptr [EBP + -0x8]
LAB_00661ad7:
00661AD7  8B 06                     MOV EAX,dword ptr [ESI]
00661AD9  8B CE                     MOV ECX,ESI
00661ADB  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00661ADE  83 F8 01                  CMP EAX,0x1
00661AE1  7C 0C                     JL 0x00661aef
00661AE3  83 F8 29                  CMP EAX,0x29
00661AE6  7D 07                     JGE 0x00661aef
00661AE8  B8 01 00 00 00            MOV EAX,0x1
00661AED  EB 02                     JMP 0x00661af1
LAB_00661aef:
00661AEF  33 C0                     XOR EAX,EAX
LAB_00661af1:
00661AF1  85 C0                     TEST EAX,EAX
00661AF3  74 29                     JZ 0x00661b1e
00661AF5  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00661AF8  85 C0                     TEST EAX,EAX
00661AFA  74 22                     JZ 0x00661b1e
00661AFC  85 DB                     TEST EBX,EBX
00661AFE  75 11                     JNZ 0x00661b11
00661B00  6A 0A                     PUSH 0xa
00661B02  6A 02                     PUSH 0x2
00661B04  6A 0A                     PUSH 0xa
00661B06  53                        PUSH EBX
00661B07  E8 84 C7 04 00            CALL 0x006ae290
00661B0C  8B D8                     MOV EBX,EAX
00661B0E  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_00661b11:
00661B11  8D 4D E0                  LEA ECX,[EBP + -0x20]
00661B14  51                        PUSH ECX
00661B15  53                        PUSH EBX
00661B16  E8 A5 C6 04 00            CALL 0x006ae1c0
00661B1B  FF 45 F8                  INC dword ptr [EBP + -0x8]
LAB_00661b1e:
00661B1E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00661B21  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00661B24  40                        INC EAX
00661B25  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
00661B28  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00661B2B  3B C1                     CMP EAX,ECX
00661B2D  8B CA                     MOV ECX,EDX
00661B2F  0F 8C 83 FE FF FF         JL 0x006619b8
LAB_00661b35:
00661B35  51                        PUSH ECX
00661B36  E8 D5 C5 04 00            CALL 0x006ae110
00661B3B  85 DB                     TEST EBX,EBX
00661B3D  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00661B44  74 1D                     JZ 0x00661b63
00661B46  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00661B49  85 C0                     TEST EAX,EAX
00661B4B  76 0C                     JBE 0x00661b59
00661B4D  8B 8F 84 02 00 00         MOV ECX,dword ptr [EDI + 0x284]
00661B53  53                        PUSH EBX
00661B54  E8 41 28 DA FF            CALL 0x0040439a
LAB_00661b59:
00661B59  85 DB                     TEST EBX,EBX
00661B5B  74 06                     JZ 0x00661b63
00661B5D  53                        PUSH EBX
00661B5E  E8 AD C5 04 00            CALL 0x006ae110
LAB_00661b63:
00661B63  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00661B66  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00661B6B  5F                        POP EDI
00661B6C  5E                        POP ESI
00661B6D  5B                        POP EBX
00661B6E  8B E5                     MOV ESP,EBP
00661B70  5D                        POP EBP
00661B71  C3                        RET
LAB_00661b72:
00661B72  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00661B75  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
00661B78  3B C3                     CMP EAX,EBX
00661B7A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00661B80  74 09                     JZ 0x00661b8b
00661B82  50                        PUSH EAX
00661B83  E8 88 C5 04 00            CALL 0x006ae110
00661B88  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_00661b8b:
00661B8B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00661B8E  3B C3                     CMP EAX,EBX
00661B90  74 09                     JZ 0x00661b9b
00661B92  50                        PUSH EAX
00661B93  E8 78 C5 04 00            CALL 0x006ae110
00661B98  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_00661b9b:
00661B9B  68 40 2C 7D 00            PUSH 0x7d2c40
00661BA0  68 CC 4C 7A 00            PUSH 0x7a4ccc
00661BA5  56                        PUSH ESI
00661BA6  53                        PUSH EBX
00661BA7  68 E9 06 00 00            PUSH 0x6e9
00661BAC  68 80 2B 7D 00            PUSH 0x7d2b80
00661BB1  E8 1A B9 04 00            CALL 0x006ad4d0
00661BB6  83 C4 18                  ADD ESP,0x18
00661BB9  85 C0                     TEST EAX,EAX
00661BBB  74 01                     JZ 0x00661bbe
00661BBD  CC                        INT3
LAB_00661bbe:
00661BBE  68 EA 06 00 00            PUSH 0x6ea
00661BC3  68 80 2B 7D 00            PUSH 0x7d2b80
00661BC8  53                        PUSH EBX
00661BC9  56                        PUSH ESI
00661BCA  E8 71 42 04 00            CALL 0x006a5e40
LAB_00661bcf:
00661BCF  5F                        POP EDI
00661BD0  5E                        POP ESI
00661BD1  5B                        POP EBX
00661BD2  8B E5                     MOV ESP,EBP
00661BD4  5D                        POP EBP
00661BD5  C3                        RET
