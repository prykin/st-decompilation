FUN_004e1930:
004E1930  55                        PUSH EBP
004E1931  8B EC                     MOV EBP,ESP
004E1933  83 EC 20                  SUB ESP,0x20
004E1936  53                        PUSH EBX
004E1937  56                        PUSH ESI
004E1938  8B F1                     MOV ESI,ECX
004E193A  57                        PUSH EDI
004E193B  8B 86 D4 04 00 00         MOV EAX,dword ptr [ESI + 0x4d4]
004E1941  85 C0                     TEST EAX,EAX
004E1943  0F 84 ED 02 00 00         JZ 0x004e1c36
004E1949  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E194C  8B 86 DC 04 00 00         MOV EAX,dword ptr [ESI + 0x4dc]
004E1952  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004E1955  89 01                     MOV dword ptr [ECX],EAX
004E1957  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004E195D  3B F8                     CMP EDI,EAX
004E195F  7E 02                     JLE 0x004e1963
004E1961  8B F8                     MOV EDI,EAX
LAB_004e1963:
004E1963  8B 96 B8 05 00 00         MOV EDX,dword ptr [ESI + 0x5b8]
004E1969  8B 8E B0 05 00 00         MOV ECX,dword ptr [ESI + 0x5b0]
004E196F  2B C7                     SUB EAX,EDI
004E1971  52                        PUSH EDX
004E1972  89 86 E0 04 00 00         MOV dword ptr [ESI + 0x4e0],EAX
004E1978  8B 86 B4 05 00 00         MOV EAX,dword ptr [ESI + 0x5b4]
004E197E  50                        PUSH EAX
004E197F  51                        PUSH ECX
004E1980  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E1986  E8 BD 44 F2 FF            CALL 0x00405e48
004E198B  85 C0                     TEST EAX,EAX
004E198D  74 10                     JZ 0x004e199f
004E198F  8B 96 E0 04 00 00         MOV EDX,dword ptr [ESI + 0x4e0]
004E1995  6A 01                     PUSH 0x1
004E1997  52                        PUSH EDX
004E1998  8B C8                     MOV ECX,EAX
004E199A  E8 D4 0F F2 FF            CALL 0x00402973
LAB_004e199f:
004E199F  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004E19A5  85 C0                     TEST EAX,EAX
004E19A7  0F 85 54 01 00 00         JNZ 0x004e1b01
004E19AD  85 FF                     TEST EDI,EDI
004E19AF  0F 84 4C 01 00 00         JZ 0x004e1b01
004E19B5  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
004E19B9  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004E19BC  50                        PUSH EAX
004E19BD  C7 86 D4 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d4],0x0
004E19C7  51                        PUSH ECX
004E19C8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E19CE  E8 26 43 F2 FF            CALL 0x00405cf9
004E19D3  85 C0                     TEST EAX,EAX
004E19D5  74 2A                     JZ 0x004e1a01
004E19D7  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
004E19DA  85 C9                     TEST ECX,ECX
004E19DC  74 23                     JZ 0x004e1a01
004E19DE  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
004E19E1  66 8B 56 32               MOV DX,word ptr [ESI + 0x32]
004E19E5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004E19E8  C7 45 F0 99 5D 00 00      MOV dword ptr [EBP + -0x10],0x5d99
004E19EF  66 C7 45 F4 01 00         MOV word ptr [EBP + -0xc],0x1
004E19F5  66 89 55 F6               MOV word ptr [EBP + -0xa],DX
004E19F9  8B 11                     MOV EDX,dword ptr [ECX]
004E19FB  8D 45 E0                  LEA EAX,[EBP + -0x20]
004E19FE  50                        PUSH EAX
004E19FF  FF 12                     CALL dword ptr [EDX]
LAB_004e1a01:
004E1A01  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004E1A04  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E1A07  33 D2                     XOR EDX,EDX
004E1A09  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004E1A0F  3B C2                     CMP EAX,EDX
004E1A11  0F 85 26 02 00 00         JNZ 0x004e1c3d
004E1A17  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E1A1D  83 F8 39                  CMP EAX,0x39
004E1A20  74 67                     JZ 0x004e1a89
004E1A22  83 F8 5E                  CMP EAX,0x5e
004E1A25  74 62                     JZ 0x004e1a89
004E1A27  83 F8 4F                  CMP EAX,0x4f
004E1A2A  0F 85 0D 02 00 00         JNZ 0x004e1c3d
004E1A30  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004E1A36  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E1A3C  50                        PUSH EAX
004E1A3D  E8 75 2F F2 FF            CALL 0x004049b7
004E1A42  25 FF 00 00 00            AND EAX,0xff
004E1A47  48                        DEC EAX
004E1A48  74 23                     JZ 0x004e1a6d
004E1A4A  48                        DEC EAX
004E1A4B  0F 85 EC 01 00 00         JNZ 0x004e1c3d
004E1A51  8B 16                     MOV EDX,dword ptr [ESI]
004E1A53  68 4B 03 00 00            PUSH 0x34b
004E1A58  6A 04                     PUSH 0x4
004E1A5A  8B CE                     MOV ECX,ESI
004E1A5C  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004E1A62  8B C7                     MOV EAX,EDI
004E1A64  5F                        POP EDI
004E1A65  5E                        POP ESI
004E1A66  5B                        POP EBX
004E1A67  8B E5                     MOV ESP,EBP
004E1A69  5D                        POP EBP
004E1A6A  C2 08 00                  RET 0x8
LAB_004e1a6d:
004E1A6D  8B 06                     MOV EAX,dword ptr [ESI]
004E1A6F  68 7C 02 00 00            PUSH 0x27c
004E1A74  6A 04                     PUSH 0x4
004E1A76  8B CE                     MOV ECX,ESI
004E1A78  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004E1A7E  8B C7                     MOV EAX,EDI
004E1A80  5F                        POP EDI
004E1A81  5E                        POP ESI
004E1A82  5B                        POP EBX
004E1A83  8B E5                     MOV ESP,EBP
004E1A85  5D                        POP EBP
004E1A86  C2 08 00                  RET 0x8
LAB_004e1a89:
004E1A89  8A 8E 3D 02 00 00         MOV CL,byte ptr [ESI + 0x23d]
004E1A8F  51                        PUSH ECX
004E1A90  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E1A96  E8 1C 2F F2 FF            CALL 0x004049b7
004E1A9B  25 FF 00 00 00            AND EAX,0xff
004E1AA0  48                        DEC EAX
004E1AA1  74 42                     JZ 0x004e1ae5
004E1AA3  48                        DEC EAX
004E1AA4  74 23                     JZ 0x004e1ac9
004E1AA6  48                        DEC EAX
004E1AA7  0F 85 90 01 00 00         JNZ 0x004e1c3d
004E1AAD  8B 16                     MOV EDX,dword ptr [ESI]
004E1AAF  68 A5 03 00 00            PUSH 0x3a5
004E1AB4  6A 04                     PUSH 0x4
004E1AB6  8B CE                     MOV ECX,ESI
004E1AB8  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004E1ABE  8B C7                     MOV EAX,EDI
004E1AC0  5F                        POP EDI
004E1AC1  5E                        POP ESI
004E1AC2  5B                        POP EBX
004E1AC3  8B E5                     MOV ESP,EBP
004E1AC5  5D                        POP EBP
004E1AC6  C2 08 00                  RET 0x8
LAB_004e1ac9:
004E1AC9  8B 06                     MOV EAX,dword ptr [ESI]
004E1ACB  68 E4 02 00 00            PUSH 0x2e4
004E1AD0  6A 04                     PUSH 0x4
004E1AD2  8B CE                     MOV ECX,ESI
004E1AD4  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004E1ADA  8B C7                     MOV EAX,EDI
004E1ADC  5F                        POP EDI
004E1ADD  5E                        POP ESI
004E1ADE  5B                        POP EBX
004E1ADF  8B E5                     MOV ESP,EBP
004E1AE1  5D                        POP EBP
004E1AE2  C2 08 00                  RET 0x8
LAB_004e1ae5:
004E1AE5  8B 16                     MOV EDX,dword ptr [ESI]
004E1AE7  68 1E 02 00 00            PUSH 0x21e
004E1AEC  6A 04                     PUSH 0x4
004E1AEE  8B CE                     MOV ECX,ESI
004E1AF0  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004E1AF6  8B C7                     MOV EAX,EDI
004E1AF8  5F                        POP EDI
004E1AF9  5E                        POP ESI
004E1AFA  5B                        POP EBX
004E1AFB  8B E5                     MOV ESP,EBP
004E1AFD  5D                        POP EBP
004E1AFE  C2 08 00                  RET 0x8
LAB_004e1b01:
004E1B01  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E1B07  83 C0 C7                  ADD EAX,-0x39
004E1B0A  83 F8 27                  CMP EAX,0x27
004E1B0D  0F 87 2A 01 00 00         JA 0x004e1c3d
004E1B13  33 C9                     XOR ECX,ECX
004E1B15  8A 88 64 1C 4E 00         MOV CL,byte ptr [EAX + 0x4e1c64]
switchD_004e1b1b::switchD:
004E1B1B  FF 24 8D 48 1C 4E 00      JMP dword ptr [ECX*0x4 + 0x4e1c48]
switchD_004e1b1b::caseD_5e:
004E1B22  8B 16                     MOV EDX,dword ptr [ESI]
004E1B24  68 AB 03 00 00            PUSH 0x3ab
004E1B29  6A 03                     PUSH 0x3
004E1B2B  8B CE                     MOV ECX,ESI
004E1B2D  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004E1B33  8B C7                     MOV EAX,EDI
004E1B35  5F                        POP EDI
004E1B36  5E                        POP ESI
004E1B37  5B                        POP EBX
004E1B38  8B E5                     MOV ESP,EBP
004E1B3A  5D                        POP EBP
004E1B3B  C2 08 00                  RET 0x8
switchD_004e1b1b::caseD_39:
004E1B3E  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004E1B44  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E1B4A  8B 1E                     MOV EBX,dword ptr [ESI]
004E1B4C  50                        PUSH EAX
004E1B4D  E8 65 2E F2 FF            CALL 0x004049b7
004E1B52  2C 02                     SUB AL,0x2
004E1B54  8B CE                     MOV ECX,ESI
004E1B56  F6 D8                     NEG AL
004E1B58  1B C0                     SBB EAX,EAX
004E1B5A  24 3A                     AND AL,0x3a
004E1B5C  05 EA 02 00 00            ADD EAX,0x2ea
004E1B61  50                        PUSH EAX
004E1B62  6A 03                     PUSH 0x3
004E1B64  FF 93 90 00 00 00         CALL dword ptr [EBX + 0x90]
004E1B6A  8B C7                     MOV EAX,EDI
004E1B6C  5F                        POP EDI
004E1B6D  5E                        POP ESI
004E1B6E  5B                        POP EBX
004E1B6F  8B E5                     MOV ESP,EBP
004E1B71  5D                        POP EBP
004E1B72  C2 08 00                  RET 0x8
switchD_004e1b1b::caseD_4f:
004E1B75  8A 8E 3D 02 00 00         MOV CL,byte ptr [ESI + 0x23d]
004E1B7B  8B 1E                     MOV EBX,dword ptr [ESI]
004E1B7D  51                        PUSH ECX
004E1B7E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E1B84  E8 2E 2E F2 FF            CALL 0x004049b7
004E1B89  2C 02                     SUB AL,0x2
004E1B8B  8B CE                     MOV ECX,ESI
004E1B8D  F6 D8                     NEG AL
004E1B8F  1B C0                     SBB EAX,EAX
004E1B91  24 32                     AND AL,0x32
004E1B93  05 50 03 00 00            ADD EAX,0x350
004E1B98  50                        PUSH EAX
004E1B99  6A 03                     PUSH 0x3
004E1B9B  FF 93 90 00 00 00         CALL dword ptr [EBX + 0x90]
004E1BA1  8B C7                     MOV EAX,EDI
004E1BA3  5F                        POP EDI
004E1BA4  5E                        POP ESI
004E1BA5  5B                        POP EBX
004E1BA6  8B E5                     MOV ESP,EBP
004E1BA8  5D                        POP EBP
004E1BA9  C2 08 00                  RET 0x8
switchD_004e1b1b::caseD_60:
004E1BAC  8B 16                     MOV EDX,dword ptr [ESI]
004E1BAE  68 BA 03 00 00            PUSH 0x3ba
004E1BB3  6A 03                     PUSH 0x3
004E1BB5  8B CE                     MOV ECX,ESI
004E1BB7  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
004E1BBD  8B C7                     MOV EAX,EDI
004E1BBF  5F                        POP EDI
004E1BC0  5E                        POP ESI
004E1BC1  5B                        POP EBX
004E1BC2  8B E5                     MOV ESP,EBP
004E1BC4  5D                        POP EBP
004E1BC5  C2 08 00                  RET 0x8
switchD_004e1b1b::caseD_3b:
004E1BC8  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004E1BCE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E1BD4  8B 1E                     MOV EBX,dword ptr [ESI]
004E1BD6  50                        PUSH EAX
004E1BD7  E8 DB 2D F2 FF            CALL 0x004049b7
004E1BDC  2C 02                     SUB AL,0x2
004E1BDE  8B CE                     MOV ECX,ESI
004E1BE0  F6 D8                     NEG AL
004E1BE2  1B C0                     SBB EAX,EAX
004E1BE4  24 3A                     AND AL,0x3a
004E1BE6  05 F7 02 00 00            ADD EAX,0x2f7
004E1BEB  50                        PUSH EAX
004E1BEC  6A 03                     PUSH 0x3
004E1BEE  FF 93 90 00 00 00         CALL dword ptr [EBX + 0x90]
004E1BF4  8B C7                     MOV EAX,EDI
004E1BF6  5F                        POP EDI
004E1BF7  5E                        POP ESI
004E1BF8  5B                        POP EBX
004E1BF9  8B E5                     MOV ESP,EBP
004E1BFB  5D                        POP EBP
004E1BFC  C2 08 00                  RET 0x8
switchD_004e1b1b::caseD_52:
004E1BFF  8A 8E 3D 02 00 00         MOV CL,byte ptr [ESI + 0x23d]
004E1C05  8B 1E                     MOV EBX,dword ptr [ESI]
004E1C07  51                        PUSH ECX
004E1C08  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E1C0E  E8 A4 2D F2 FF            CALL 0x004049b7
004E1C13  2C 02                     SUB AL,0x2
004E1C15  8B CE                     MOV ECX,ESI
004E1C17  F6 D8                     NEG AL
004E1C19  1B C0                     SBB EAX,EAX
004E1C1B  24 3B                     AND AL,0x3b
004E1C1D  05 5D 03 00 00            ADD EAX,0x35d
004E1C22  50                        PUSH EAX
004E1C23  6A 03                     PUSH 0x3
004E1C25  FF 93 90 00 00 00         CALL dword ptr [EBX + 0x90]
004E1C2B  8B C7                     MOV EAX,EDI
004E1C2D  5F                        POP EDI
004E1C2E  5E                        POP ESI
004E1C2F  5B                        POP EBX
004E1C30  8B E5                     MOV ESP,EBP
004E1C32  5D                        POP EBP
004E1C33  C2 08 00                  RET 0x8
LAB_004e1c36:
004E1C36  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E1C39  33 FF                     XOR EDI,EDI
004E1C3B  89 3A                     MOV dword ptr [EDX],EDI
switchD_004e1b1b::caseD_3a:
004E1C3D  8B C7                     MOV EAX,EDI
004E1C3F  5F                        POP EDI
004E1C40  5E                        POP ESI
004E1C41  5B                        POP EBX
004E1C42  8B E5                     MOV ESP,EBP
004E1C44  5D                        POP EBP
004E1C45  C2 08 00                  RET 0x8
