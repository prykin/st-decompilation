FUN_00602be0:
00602BE0  55                        PUSH EBP
00602BE1  8B EC                     MOV EBP,ESP
00602BE3  83 EC 08                  SUB ESP,0x8
00602BE6  53                        PUSH EBX
00602BE7  56                        PUSH ESI
00602BE8  8B F1                     MOV ESI,ECX
00602BEA  57                        PUSH EDI
00602BEB  8B 86 9B 03 00 00         MOV EAX,dword ptr [ESI + 0x39b]
00602BF1  85 C0                     TEST EAX,EAX
00602BF3  7D 0D                     JGE 0x00602c02
00602BF5  E8 F3 E7 DF FF            CALL 0x004013ed
00602BFA  85 C0                     TEST EAX,EAX
00602BFC  0F 84 F0 01 00 00         JZ 0x00602df2
LAB_00602c02:
00602C02  8B 86 6E 03 00 00         MOV EAX,dword ptr [ESI + 0x36e]
00602C08  83 F8 02                  CMP EAX,0x2
00602C0B  0F 85 C2 00 00 00         JNZ 0x00602cd3
00602C11  80 BE 7A 03 00 00 01      CMP byte ptr [ESI + 0x37a],0x1
00602C18  75 27                     JNZ 0x00602c41
00602C1A  A1 24 67 80 00            MOV EAX,[0x00806724]
00602C1F  8B 96 97 03 00 00         MOV EDX,dword ptr [ESI + 0x397]
00602C25  0F BF 48 2C               MOVSX ECX,word ptr [EAX + 0x2c]
00602C29  8B 44 90 30               MOV EAX,dword ptr [EAX + EDX*0x4 + 0x30]
00602C2D  51                        PUSH ECX
00602C2E  8B 8E ED 01 00 00         MOV ECX,dword ptr [ESI + 0x1ed]
00602C34  50                        PUSH EAX
00602C35  51                        PUSH ECX
00602C36  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00602C3C  E8 0F 67 0E 00            CALL 0x006e9350
LAB_00602c41:
00602C41  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00602C47  F6 82 E4 00 00 00 03      TEST byte ptr [EDX + 0xe4],0x3
00602C4E  75 0D                     JNZ 0x00602c5d
00602C50  0F BE 86 9F 03 00 00      MOVSX EAX,byte ptr [ESI + 0x39f]
00602C57  01 86 97 03 00 00         ADD dword ptr [ESI + 0x397],EAX
LAB_00602c5d:
00602C5D  8A 86 9F 03 00 00         MOV AL,byte ptr [ESI + 0x39f]
00602C63  84 C0                     TEST AL,AL
00602C65  7E 40                     JLE 0x00602ca7
00602C67  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
00602C6D  8B 86 97 03 00 00         MOV EAX,dword ptr [ESI + 0x397]
00602C73  0F BF 51 23               MOVSX EDX,word ptr [ECX + 0x23]
00602C77  3B C2                     CMP EAX,EDX
00602C79  0F 8C 89 00 00 00         JL 0x00602d08
00602C7F  8A 86 7A 03 00 00         MOV AL,byte ptr [ESI + 0x37a]
00602C85  C7 86 6E 03 00 00 00 00 00 00  MOV dword ptr [ESI + 0x36e],0x0
00602C8F  3C 01                     CMP AL,0x1
00602C91  75 75                     JNZ 0x00602d08
00602C93  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00602C99  E8 71 10 E0 FF            CALL 0x00403d0f
00602C9E  C6 86 7A 03 00 00 00      MOV byte ptr [ESI + 0x37a],0x0
00602CA5  EB 61                     JMP 0x00602d08
LAB_00602ca7:
00602CA7  8B 86 97 03 00 00         MOV EAX,dword ptr [ESI + 0x397]
00602CAD  85 C0                     TEST EAX,EAX
00602CAF  7D 57                     JGE 0x00602d08
00602CB1  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
00602CB7  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00602CBD  6A 00                     PUSH 0x0
00602CBF  6A 00                     PUSH 0x0
00602CC1  50                        PUSH EAX
00602CC2  E8 89 66 0E 00            CALL 0x006e9350
00602CC7  C7 86 6E 03 00 00 01 00 00 00  MOV dword ptr [ESI + 0x36e],0x1
00602CD1  EB 35                     JMP 0x00602d08
LAB_00602cd3:
00602CD3  83 F8 04                  CMP EAX,0x4
00602CD6  74 30                     JZ 0x00602d08
00602CD8  8B CE                     MOV ECX,ESI
00602CDA  E8 51 30 E0 FF            CALL 0x00405d30
00602CDF  85 C0                     TEST EAX,EAX
00602CE1  89 86 AB 03 00 00         MOV dword ptr [ESI + 0x3ab],EAX
00602CE7  74 1F                     JZ 0x00602d08
00602CE9  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00602CEF  E8 E1 F4 DF FF            CALL 0x004021d5
00602CF4  C7 86 9B 03 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x39b],0xffffffff
00602CFE  C7 86 6E 03 00 00 04 00 00 00  MOV dword ptr [ESI + 0x36e],0x4
LAB_00602d08:
00602D08  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00602D0E  85 FF                     TEST EDI,EDI
00602D10  0F 84 DC 00 00 00         JZ 0x00602df2
00602D16  8B 86 9B 03 00 00         MOV EAX,dword ptr [ESI + 0x39b]
00602D1C  85 C0                     TEST EAX,EAX
00602D1E  0F 8C CE 00 00 00         JL 0x00602df2
00602D24  A0 4D 87 80 00            MOV AL,[0x0080874d]
00602D29  0F BF 9E 59 02 00 00      MOVSX EBX,word ptr [ESI + 0x259]
00602D30  3C FF                     CMP AL,0xff
00602D32  74 73                     JZ 0x00602da7
00602D34  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
00602D3A  85 C0                     TEST EAX,EAX
00602D3C  74 69                     JZ 0x00602da7
00602D3E  0F BF 86 57 02 00 00      MOVSX EAX,word ptr [ESI + 0x257]
00602D45  8D 4D F8                  LEA ECX,[EBP + -0x8]
00602D48  8D 55 FC                  LEA EDX,[EBP + -0x4]
00602D4B  51                        PUSH ECX
00602D4C  52                        PUSH EDX
00602D4D  0F BF 8E 55 02 00 00      MOVSX ECX,word ptr [ESI + 0x255]
00602D54  8B 97 0C 01 00 00         MOV EDX,dword ptr [EDI + 0x10c]
00602D5A  50                        PUSH EAX
00602D5B  51                        PUSH ECX
00602D5C  52                        PUSH EDX
00602D5D  8B CF                     MOV ECX,EDI
00602D5F  E8 EF 11 E0 FF            CALL 0x00403f53
00602D64  85 DB                     TEST EBX,EBX
00602D66  7C 3F                     JL 0x00602da7
00602D68  83 FB 05                  CMP EBX,0x5
00602D6B  7D 3A                     JGE 0x00602da7
00602D6D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00602D70  85 D2                     TEST EDX,EDX
00602D72  7C 33                     JL 0x00602da7
00602D74  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
00602D77  3B D1                     CMP EDX,ECX
00602D79  7D 2C                     JGE 0x00602da7
00602D7B  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
00602D82  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00602D85  03 C3                     ADD EAX,EBX
00602D87  85 C0                     TEST EAX,EAX
00602D89  7C 1C                     JL 0x00602da7
00602D8B  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
00602D8E  7D 17                     JGE 0x00602da7
00602D90  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
00602D93  85 FF                     TEST EDI,EDI
00602D95  74 10                     JZ 0x00602da7
00602D97  0F AF C1                  IMUL EAX,ECX
00602D9A  03 C7                     ADD EAX,EDI
00602D9C  33 C9                     XOR ECX,ECX
00602D9E  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
00602DA1  8B C1                     MOV EAX,ECX
00602DA3  85 C0                     TEST EAX,EAX
00602DA5  74 2F                     JZ 0x00602dd6
LAB_00602da7:
00602DA7  8B 16                     MOV EDX,dword ptr [ESI]
00602DA9  8B CE                     MOV ECX,ESI
00602DAB  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00602DB1  8A 86 7A 03 00 00         MOV AL,byte ptr [ESI + 0x37a]
00602DB7  84 C0                     TEST AL,AL
00602DB9  75 37                     JNZ 0x00602df2
00602DBB  6A 00                     PUSH 0x0
00602DBD  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00602DC3  E8 BA FB DF FF            CALL 0x00402982
00602DC8  C6 86 7A 03 00 00 01      MOV byte ptr [ESI + 0x37a],0x1
00602DCF  5F                        POP EDI
00602DD0  5E                        POP ESI
00602DD1  5B                        POP EBX
00602DD2  8B E5                     MOV ESP,EBP
00602DD4  5D                        POP EBP
00602DD5  C3                        RET
LAB_00602dd6:
00602DD6  8A 86 7A 03 00 00         MOV AL,byte ptr [ESI + 0x37a]
00602DDC  84 C0                     TEST AL,AL
00602DDE  74 12                     JZ 0x00602df2
00602DE0  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00602DE6  E8 24 0F E0 FF            CALL 0x00403d0f
00602DEB  C6 86 7A 03 00 00 00      MOV byte ptr [ESI + 0x37a],0x0
LAB_00602df2:
00602DF2  5F                        POP EDI
00602DF3  5E                        POP ESI
00602DF4  5B                        POP EBX
00602DF5  8B E5                     MOV ESP,EBP
00602DF7  5D                        POP EBP
00602DF8  C3                        RET
