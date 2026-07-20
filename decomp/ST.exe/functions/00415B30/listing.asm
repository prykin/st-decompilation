STJellyGunC::sub_00415B30:
00415B30  55                        PUSH EBP
00415B31  8B EC                     MOV EBP,ESP
00415B33  6A FF                     PUSH -0x1
00415B35  68 A0 01 79 00            PUSH 0x7901a0
00415B3A  68 64 D9 72 00            PUSH 0x72d964
00415B3F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00415B45  50                        PUSH EAX
00415B46  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
00415B4D  83 EC 30                  SUB ESP,0x30
00415B50  53                        PUSH EBX
00415B51  56                        PUSH ESI
00415B52  57                        PUSH EDI
00415B53  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00415B56  8B F1                     MOV ESI,ECX
00415B58  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00415B5F  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
00415B63  66 89 46 34               MOV word ptr [ESI + 0x34],AX
00415B67  66 8B 5D 0C               MOV BX,word ptr [EBP + 0xc]
00415B6B  66 89 5E 36               MOV word ptr [ESI + 0x36],BX
00415B6F  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
00415B73  66 89 4E 38               MOV word ptr [ESI + 0x38],CX
00415B77  66 8B 55 14               MOV DX,word ptr [EBP + 0x14]
00415B7B  66 89 56 3A               MOV word ptr [ESI + 0x3a],DX
00415B7F  66 8B 55 18               MOV DX,word ptr [EBP + 0x18]
00415B83  66 89 56 3C               MOV word ptr [ESI + 0x3c],DX
00415B87  66 8B 55 1C               MOV DX,word ptr [EBP + 0x1c]
00415B8B  66 89 56 3E               MOV word ptr [ESI + 0x3e],DX
00415B8F  66 89 46 41               MOV word ptr [ESI + 0x41],AX
00415B93  66 89 5E 43               MOV word ptr [ESI + 0x43],BX
00415B97  66 89 4E 45               MOV word ptr [ESI + 0x45],CX
00415B9B  0F BF F8                  MOVSX EDI,AX
00415B9E  B8 79 19 8C 02            MOV EAX,0x28c1979
00415BA3  F7 EF                     IMUL EDI
00415BA5  D1 FA                     SAR EDX,0x1
00415BA7  8B C2                     MOV EAX,EDX
00415BA9  C1 E8 1F                  SHR EAX,0x1f
00415BAC  03 D0                     ADD EDX,EAX
00415BAE  8B CA                     MOV ECX,EDX
00415BB0  66 89 4E 47               MOV word ptr [ESI + 0x47],CX
00415BB4  0F BF D3                  MOVSX EDX,BX
00415BB7  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00415BBA  B8 79 19 8C 02            MOV EAX,0x28c1979
00415BBF  F7 EA                     IMUL EDX
00415BC1  D1 FA                     SAR EDX,0x1
00415BC3  8B C2                     MOV EAX,EDX
00415BC5  C1 E8 1F                  SHR EAX,0x1f
00415BC8  03 D0                     ADD EDX,EAX
00415BCA  8B DA                     MOV EBX,EDX
00415BCC  66 89 5E 49               MOV word ptr [ESI + 0x49],BX
00415BD0  0F BF 55 10               MOVSX EDX,word ptr [EBP + 0x10]
00415BD4  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00415BD7  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00415BDC  F7 EA                     IMUL EDX
00415BDE  C1 FA 06                  SAR EDX,0x6
00415BE1  8B C2                     MOV EAX,EDX
00415BE3  C1 E8 1F                  SHR EAX,0x1f
00415BE6  03 D0                     ADD EDX,EAX
00415BE8  66 89 56 4B               MOV word ptr [ESI + 0x4b],DX
00415BEC  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00415BEF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00415BF2  8D 4C C1 64               LEA ECX,[ECX + EAX*0x8 + 0x64]
00415BF6  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00415BF9  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
00415BFC  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00415BFF  8D 5C C3 64               LEA EBX,[EBX + EAX*0x8 + 0x64]
00415C03  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
00415C06  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
00415C09  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00415C0C  8D 14 D5 64 00 00 00      LEA EDX,[EDX*0x8 + 0x64]
00415C13  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00415C16  0F BF C1                  MOVSX EAX,CX
00415C19  8D 48 E2                  LEA ECX,[EAX + -0x1e]
00415C1C  3B F9                     CMP EDI,ECX
00415C1E  7E 35                     JLE 0x00415c55
00415C20  83 C0 1E                  ADD EAX,0x1e
00415C23  3B F8                     CMP EDI,EAX
00415C25  7D 2E                     JGE 0x00415c55
00415C27  0F BF C3                  MOVSX EAX,BX
00415C2A  8D 58 E2                  LEA EBX,[EAX + -0x1e]
00415C2D  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00415C30  3B CB                     CMP ECX,EBX
00415C32  7E 21                     JLE 0x00415c55
00415C34  83 C0 1E                  ADD EAX,0x1e
00415C37  3B C8                     CMP ECX,EAX
00415C39  7D 1A                     JGE 0x00415c55
00415C3B  0F BF C2                  MOVSX EAX,DX
00415C3E  8D 50 E3                  LEA EDX,[EAX + -0x1d]
00415C41  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
00415C44  3B DA                     CMP EBX,EDX
00415C46  7E 10                     JLE 0x00415c58
00415C48  83 C0 1D                  ADD EAX,0x1d
00415C4B  3B D8                     CMP EBX,EAX
00415C4D  7D 09                     JGE 0x00415c58
00415C4F  C6 46 4D 00               MOV byte ptr [ESI + 0x4d],0x0
00415C53  EB 07                     JMP 0x00415c5c
LAB_00415c55:
00415C55  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
LAB_00415c58:
00415C58  C6 46 4D 01               MOV byte ptr [ESI + 0x4d],0x1
LAB_00415c5c:
00415C5C  8A 46 4D                  MOV AL,byte ptr [ESI + 0x4d]
00415C5F  88 46 40                  MOV byte ptr [ESI + 0x40],AL
00415C62  8A 4D 20                  MOV CL,byte ptr [EBP + 0x20]
00415C65  88 4E 63                  MOV byte ptr [ESI + 0x63],CL
00415C68  C7 46 68 00 00 00 00      MOV dword ptr [ESI + 0x68],0x0
00415C6F  0F BF 45 1C               MOVSX EAX,word ptr [EBP + 0x1c]
00415C73  0F BF 55 18               MOVSX EDX,word ptr [EBP + 0x18]
00415C77  0F BF 4D 14               MOVSX ECX,word ptr [EBP + 0x14]
00415C7B  50                        PUSH EAX
00415C7C  52                        PUSH EDX
00415C7D  51                        PUSH ECX
00415C7E  53                        PUSH EBX
00415C7F  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00415C82  52                        PUSH EDX
00415C83  57                        PUSH EDI
00415C84  E8 84 72 29 00            CALL 0x006acf0d
00415C89  83 C4 18                  ADD ESP,0x18
00415C8C  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00415C8F  81 E1 FF 00 00 00         AND ECX,0xff
00415C95  99                        CDQ
00415C96  F7 F9                     IDIV ECX
00415C98  89 46 64                  MOV dword ptr [ESI + 0x64],EAX
00415C9B  83 F8 01                  CMP EAX,0x1
00415C9E  7D 07                     JGE 0x00415ca7
00415CA0  C7 46 64 01 00 00 00      MOV dword ptr [ESI + 0x64],0x1
LAB_00415ca7:
00415CA7  8B 4E 64                  MOV ECX,dword ptr [ESI + 0x64]
00415CAA  0F BF 45 14               MOVSX EAX,word ptr [EBP + 0x14]
00415CAE  2B C7                     SUB EAX,EDI
00415CB0  99                        CDQ
00415CB1  F7 F9                     IDIV ECX
00415CB3  03 F8                     ADD EDI,EAX
00415CB5  66 89 7E 4E               MOV word ptr [ESI + 0x4e],DI
00415CB9  0F BF 45 18               MOVSX EAX,word ptr [EBP + 0x18]
00415CBD  2B 45 D4                  SUB EAX,dword ptr [EBP + -0x2c]
00415CC0  99                        CDQ
00415CC1  F7 F9                     IDIV ECX
00415CC3  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00415CC6  03 C2                     ADD EAX,EDX
00415CC8  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00415CCB  66 89 46 50               MOV word ptr [ESI + 0x50],AX
00415CCF  0F BF 45 1C               MOVSX EAX,word ptr [EBP + 0x1c]
00415CD3  2B C3                     SUB EAX,EBX
00415CD5  99                        CDQ
00415CD6  F7 F9                     IDIV ECX
00415CD8  03 D8                     ADD EBX,EAX
00415CDA  89 5D C8                  MOV dword ptr [EBP + -0x38],EBX
00415CDD  66 89 5E 52               MOV word ptr [ESI + 0x52],BX
00415CE1  0F BF DF                  MOVSX EBX,DI
00415CE4  B8 79 19 8C 02            MOV EAX,0x28c1979
00415CE9  F7 EB                     IMUL EBX
00415CEB  D1 FA                     SAR EDX,0x1
00415CED  8B C2                     MOV EAX,EDX
00415CEF  C1 E8 1F                  SHR EAX,0x1f
00415CF2  03 D0                     ADD EDX,EAX
00415CF4  8B CA                     MOV ECX,EDX
00415CF6  66 89 4E 54               MOV word ptr [ESI + 0x54],CX
00415CFA  0F BF 55 CC               MOVSX EDX,word ptr [EBP + -0x34]
00415CFE  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
00415D01  B8 79 19 8C 02            MOV EAX,0x28c1979
00415D06  F7 EA                     IMUL EDX
00415D08  D1 FA                     SAR EDX,0x1
00415D0A  8B C2                     MOV EAX,EDX
00415D0C  C1 E8 1F                  SHR EAX,0x1f
00415D0F  03 D0                     ADD EDX,EAX
00415D11  8B FA                     MOV EDI,EDX
00415D13  66 89 7E 56               MOV word ptr [ESI + 0x56],DI
00415D17  0F BF 55 C8               MOVSX EDX,word ptr [EBP + -0x38]
00415D1B  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
00415D1E  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00415D23  F7 EA                     IMUL EDX
00415D25  C1 FA 06                  SAR EDX,0x6
00415D28  8B C2                     MOV EAX,EDX
00415D2A  C1 E8 1F                  SHR EAX,0x1f
00415D2D  03 D0                     ADD EDX,EAX
00415D2F  66 89 56 58               MOV word ptr [ESI + 0x58],DX
00415D33  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00415D36  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00415D39  8D 4C C1 64               LEA ECX,[ECX + EAX*0x8 + 0x64]
00415D3D  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00415D40  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
00415D43  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00415D46  8D 7C C7 64               LEA EDI,[EDI + EAX*0x8 + 0x64]
00415D4A  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00415D4D  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
00415D50  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
00415D53  8D 14 D5 64 00 00 00      LEA EDX,[EDX*0x8 + 0x64]
00415D5A  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00415D5D  0F BF C1                  MOVSX EAX,CX
00415D60  8D 48 E2                  LEA ECX,[EAX + -0x1e]
00415D63  3B D9                     CMP EBX,ECX
00415D65  7E 35                     JLE 0x00415d9c
00415D67  83 C0 1E                  ADD EAX,0x1e
00415D6A  3B D8                     CMP EBX,EAX
00415D6C  7D 2E                     JGE 0x00415d9c
00415D6E  0F BF C7                  MOVSX EAX,DI
00415D71  8D 78 E2                  LEA EDI,[EAX + -0x1e]
00415D74  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00415D77  3B CF                     CMP ECX,EDI
00415D79  7E 21                     JLE 0x00415d9c
00415D7B  83 C0 1E                  ADD EAX,0x1e
00415D7E  3B C8                     CMP ECX,EAX
00415D80  7D 1A                     JGE 0x00415d9c
00415D82  0F BF C2                  MOVSX EAX,DX
00415D85  8D 50 E3                  LEA EDX,[EAX + -0x1d]
00415D88  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
00415D8B  3B CA                     CMP ECX,EDX
00415D8D  7E 0D                     JLE 0x00415d9c
00415D8F  83 C0 1D                  ADD EAX,0x1d
00415D92  3B C8                     CMP ECX,EAX
00415D94  7D 06                     JGE 0x00415d9c
00415D96  C6 46 5A 00               MOV byte ptr [ESI + 0x5a],0x0
00415D9A  EB 04                     JMP 0x00415da0
LAB_00415d9c:
00415D9C  C6 46 5A 01               MOV byte ptr [ESI + 0x5a],0x1
LAB_00415da0:
00415DA0  8A 46 4D                  MOV AL,byte ptr [ESI + 0x4d]
00415DA3  84 C0                     TEST AL,AL
00415DA5  75 0F                     JNZ 0x00415db6
00415DA7  80 7E 5A 01               CMP byte ptr [ESI + 0x5a],0x1
00415DAB  75 09                     JNZ 0x00415db6
00415DAD  C7 46 7A 01 00 00 00      MOV dword ptr [ESI + 0x7a],0x1
00415DB4  EB 07                     JMP 0x00415dbd
LAB_00415db6:
00415DB6  C7 46 7A 00 00 00 00      MOV dword ptr [ESI + 0x7a],0x0
LAB_00415dbd:
00415DBD  C7 46 7E 01 00 00 00      MOV dword ptr [ESI + 0x7e],0x1
00415DC4  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00415DCB  33 C0                     XOR EAX,EAX
00415DCD  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00415DD0  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00415DD7  5F                        POP EDI
00415DD8  5E                        POP ESI
00415DD9  5B                        POP EBX
00415DDA  8B E5                     MOV ESP,EBP
00415DDC  5D                        POP EBP
00415DDD  C2 1C 00                  RET 0x1c
