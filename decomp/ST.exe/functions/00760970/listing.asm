FUN_00760970:
00760970  55                        PUSH EBP
00760971  8B EC                     MOV EBP,ESP
00760973  81 EC 24 01 00 00         SUB ESP,0x124
00760979  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0076097C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0076097F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00760982  53                        PUSH EBX
00760983  8B 49 50                  MOV ECX,dword ptr [ECX + 0x50]
00760986  56                        PUSH ESI
00760987  8B B0 32 01 00 00         MOV ESI,dword ptr [EAX + 0x132]
0076098D  57                        PUSH EDI
0076098E  81 C6 80 00 00 00         ADD ESI,0x80
00760994  8D 85 DC FE FF FF         LEA EAX,[EBP + 0xfffffedc]
0076099A  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
0076099D  C7 45 F4 08 00 00 00      MOV dword ptr [EBP + -0xc],0x8
LAB_007609a4:
007609A4  8B 7A 20                  MOV EDI,dword ptr [EDX + 0x20]
007609A7  85 FF                     TEST EDI,EDI
007609A9  75 6C                     JNZ 0x00760a17
007609AB  8B 7A 40                  MOV EDI,dword ptr [EDX + 0x40]
007609AE  85 FF                     TEST EDI,EDI
007609B0  75 65                     JNZ 0x00760a17
007609B2  8B 7A 60                  MOV EDI,dword ptr [EDX + 0x60]
007609B5  85 FF                     TEST EDI,EDI
007609B7  75 5E                     JNZ 0x00760a17
007609B9  8B BA 80 00 00 00         MOV EDI,dword ptr [EDX + 0x80]
007609BF  85 FF                     TEST EDI,EDI
007609C1  75 54                     JNZ 0x00760a17
007609C3  8B BA A0 00 00 00         MOV EDI,dword ptr [EDX + 0xa0]
007609C9  85 FF                     TEST EDI,EDI
007609CB  75 4A                     JNZ 0x00760a17
007609CD  8B BA C0 00 00 00         MOV EDI,dword ptr [EDX + 0xc0]
007609D3  85 FF                     TEST EDI,EDI
007609D5  75 40                     JNZ 0x00760a17
007609D7  8B BA E0 00 00 00         MOV EDI,dword ptr [EDX + 0xe0]
007609DD  85 FF                     TEST EDI,EDI
007609DF  75 36                     JNZ 0x00760a17
007609E1  8B 3A                     MOV EDI,dword ptr [EDX]
007609E3  83 C2 04                  ADD EDX,0x4
007609E6  0F AF 39                  IMUL EDI,dword ptr [ECX]
007609E9  89 38                     MOV dword ptr [EAX],EDI
007609EB  89 78 20                  MOV dword ptr [EAX + 0x20],EDI
007609EE  89 78 40                  MOV dword ptr [EAX + 0x40],EDI
007609F1  89 78 60                  MOV dword ptr [EAX + 0x60],EDI
007609F4  89 B8 80 00 00 00         MOV dword ptr [EAX + 0x80],EDI
007609FA  89 B8 A0 00 00 00         MOV dword ptr [EAX + 0xa0],EDI
00760A00  89 B8 C0 00 00 00         MOV dword ptr [EAX + 0xc0],EDI
00760A06  89 B8 E0 00 00 00         MOV dword ptr [EAX + 0xe0],EDI
00760A0C  83 C1 04                  ADD ECX,0x4
00760A0F  83 C0 04                  ADD EAX,0x4
00760A12  E9 98 01 00 00            JMP 0x00760baf
LAB_00760a17:
00760A17  8B 99 80 00 00 00         MOV EBX,dword ptr [ECX + 0x80]
00760A1D  8B 32                     MOV ESI,dword ptr [EDX]
00760A1F  0F AF 9A 80 00 00 00      IMUL EBX,dword ptr [EDX + 0x80]
00760A26  0F AF 31                  IMUL ESI,dword ptr [ECX]
00760A29  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
00760A2C  8B 99 C0 00 00 00         MOV EBX,dword ptr [ECX + 0xc0]
00760A32  0F AF 9A C0 00 00 00      IMUL EBX,dword ptr [EDX + 0xc0]
00760A39  8B 79 40                  MOV EDI,dword ptr [ECX + 0x40]
00760A3C  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00760A3F  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00760A42  0F AF 7A 40               IMUL EDI,dword ptr [EDX + 0x40]
00760A46  03 DE                     ADD EBX,ESI
00760A48  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00760A4B  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00760A4E  2B F3                     SUB ESI,EBX
00760A50  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
00760A53  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
00760A56  8D 1C 3E                  LEA EBX,[ESI + EDI*0x1]
00760A59  2B FE                     SUB EDI,ESI
00760A5B  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00760A5E  8D 34 BF                  LEA ESI,[EDI + EDI*0x4]
00760A61  8D 34 F6                  LEA ESI,[ESI + ESI*0x8]
00760A64  8D 3C B7                  LEA EDI,[EDI + ESI*0x4]
00760A67  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00760A6A  D1 E7                     SHL EDI,0x1
00760A6C  C1 FF 08                  SAR EDI,0x8
00760A6F  2B FB                     SUB EDI,EBX
00760A71  03 DE                     ADD EBX,ESI
00760A73  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00760A76  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00760A79  2B F3                     SUB ESI,EBX
00760A7B  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00760A7E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00760A81  8D 1C 37                  LEA EBX,[EDI + ESI*0x1]
00760A84  2B F7                     SUB ESI,EDI
00760A86  8B 79 60                  MOV EDI,dword ptr [ECX + 0x60]
00760A89  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
00760A8C  0F AF 7A 60               IMUL EDI,dword ptr [EDX + 0x60]
00760A90  8B 99 E0 00 00 00         MOV EBX,dword ptr [ECX + 0xe0]
00760A96  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00760A99  0F AF 9A E0 00 00 00      IMUL EBX,dword ptr [EDX + 0xe0]
00760AA0  8B B9 A0 00 00 00         MOV EDI,dword ptr [ECX + 0xa0]
00760AA6  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
00760AA9  0F AF BA A0 00 00 00      IMUL EDI,dword ptr [EDX + 0xa0]
00760AB0  8B 71 20                  MOV ESI,dword ptr [ECX + 0x20]
00760AB3  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00760AB6  0F AF 72 20               IMUL ESI,dword ptr [EDX + 0x20]
00760ABA  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00760ABD  03 DF                     ADD EBX,EDI
00760ABF  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00760AC2  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00760AC5  2B FB                     SUB EDI,EBX
00760AC7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00760ACA  03 DE                     ADD EBX,ESI
00760ACC  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00760ACF  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00760AD2  2B F3                     SUB ESI,EBX
00760AD4  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00760AD7  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00760ADA  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00760ADD  03 F3                     ADD ESI,EBX
00760ADF  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00760AE2  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00760AE5  03 F7                     ADD ESI,EDI
00760AE7  8B DE                     MOV EBX,ESI
00760AE9  C1 E3 04                  SHL EBX,0x4
00760AEC  2B DE                     SUB EBX,ESI
00760AEE  C1 E3 02                  SHL EBX,0x2
00760AF1  2B DE                     SUB EBX,ESI
00760AF3  8D 1C DE                  LEA EBX,[ESI + EBX*0x8]
00760AF6  8D 34 FD 00 00 00 00      LEA ESI,[EDI*0x8 + 0x0]
00760AFD  2B F7                     SUB ESI,EDI
00760AFF  C1 E6 05                  SHL ESI,0x5
00760B02  2B F7                     SUB ESI,EDI
00760B04  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00760B07  F7 DE                     NEG ESI
00760B09  C1 FB 08                  SAR EBX,0x8
00760B0C  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
00760B0F  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00760B12  C1 FE 08                  SAR ESI,0x8
00760B15  2B F7                     SUB ESI,EDI
00760B17  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00760B1A  03 F3                     ADD ESI,EBX
00760B1C  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00760B1F  83 C2 04                  ADD EDX,0x4
00760B22  2B FB                     SUB EDI,EBX
00760B24  83 C1 04                  ADD ECX,0x4
00760B27  8D 1C BF                  LEA EBX,[EDI + EDI*0x4]
00760B2A  8D 1C DB                  LEA EBX,[EBX + EBX*0x8]
00760B2D  8D 3C 9F                  LEA EDI,[EDI + EBX*0x4]
00760B30  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00760B33  D1 E7                     SHL EDI,0x1
00760B35  C1 FF 08                  SAR EDI,0x8
00760B38  2B FE                     SUB EDI,ESI
00760B3A  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00760B3D  8D 3C 5B                  LEA EDI,[EBX + EBX*0x2]
00760B40  C1 E7 03                  SHL EDI,0x3
00760B43  2B FB                     SUB EDI,EBX
00760B45  8D 3C 7F                  LEA EDI,[EDI + EDI*0x2]
00760B48  8D 3C BB                  LEA EDI,[EBX + EDI*0x4]
00760B4B  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00760B4E  C1 FF 08                  SAR EDI,0x8
00760B51  2B FB                     SUB EDI,EBX
00760B53  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00760B56  03 FB                     ADD EDI,EBX
00760B58  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00760B5B  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00760B5E  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
00760B61  03 DF                     ADD EBX,EDI
00760B63  89 18                     MOV dword ptr [EAX],EBX
00760B65  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00760B68  2B FB                     SUB EDI,EBX
00760B6A  89 B8 E0 00 00 00         MOV dword ptr [EAX + 0xe0],EDI
00760B70  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
00760B73  8D 1C 3E                  LEA EBX,[ESI + EDI*0x1]
00760B76  2B FE                     SUB EDI,ESI
00760B78  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00760B7B  89 B8 C0 00 00 00         MOV dword ptr [EAX + 0xc0],EDI
00760B81  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00760B84  89 58 20                  MOV dword ptr [EAX + 0x20],EBX
00760B87  8D 1C 37                  LEA EBX,[EDI + ESI*0x1]
00760B8A  2B F7                     SUB ESI,EDI
00760B8C  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00760B8F  89 B0 A0 00 00 00         MOV dword ptr [EAX + 0xa0],ESI
00760B95  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
00760B98  89 58 40                  MOV dword ptr [EAX + 0x40],EBX
00760B9B  8D 1C 37                  LEA EBX,[EDI + ESI*0x1]
00760B9E  2B F7                     SUB ESI,EDI
00760BA0  89 98 80 00 00 00         MOV dword ptr [EAX + 0x80],EBX
00760BA6  89 70 60                  MOV dword ptr [EAX + 0x60],ESI
00760BA9  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
00760BAC  83 C0 04                  ADD EAX,0x4
LAB_00760baf:
00760BAF  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00760BB2  4F                        DEC EDI
00760BB3  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00760BB6  0F 85 E8 FD FF FF         JNZ 0x007609a4
00760BBC  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00760BBF  8D 8D DC FE FF FF         LEA ECX,[EBP + 0xfffffedc]
00760BC5  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00760BC8  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00760BCB  C7 45 E4 08 00 00 00      MOV dword ptr [EBP + -0x1c],0x8
LAB_00760bd2:
00760BD2  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00760BD5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00760BD8  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00760BDB  8B 59 04                  MOV EBX,dword ptr [ECX + 0x4]
00760BDE  8B 00                     MOV EAX,dword ptr [EAX]
00760BE0  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
00760BE3  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00760BE6  03 C7                     ADD EAX,EDI
00760BE8  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
00760BEB  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00760BEE  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
00760BF1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00760BF4  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00760BF7  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
00760BFA  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00760BFD  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00760C00  0B DF                     OR EBX,EDI
00760C02  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
00760C05  0B DA                     OR EBX,EDX
00760C07  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00760C0A  0B DA                     OR EBX,EDX
00760C0C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00760C0F  0B DA                     OR EBX,EDX
00760C11  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00760C14  0B DA                     OR EBX,EDX
00760C16  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00760C19  0B DA                     OR EBX,EDX
00760C1B  75 2A                     JNZ 0x00760c47
00760C1D  8B 11                     MOV EDX,dword ptr [ECX]
00760C1F  C1 FA 05                  SAR EDX,0x5
00760C22  81 E2 FF 03 00 00         AND EDX,0x3ff
00760C28  8A 14 32                  MOV DL,byte ptr [EDX + ESI*0x1]
00760C2B  88 10                     MOV byte ptr [EAX],DL
00760C2D  88 50 01                  MOV byte ptr [EAX + 0x1],DL
00760C30  88 50 02                  MOV byte ptr [EAX + 0x2],DL
00760C33  88 50 03                  MOV byte ptr [EAX + 0x3],DL
00760C36  88 50 04                  MOV byte ptr [EAX + 0x4],DL
00760C39  88 50 05                  MOV byte ptr [EAX + 0x5],DL
00760C3C  88 50 06                  MOV byte ptr [EAX + 0x6],DL
00760C3F  88 50 07                  MOV byte ptr [EAX + 0x7],DL
00760C42  E9 7C 01 00 00            JMP 0x00760dc3
LAB_00760c47:
00760C47  8B 09                     MOV ECX,dword ptr [ECX]
00760C49  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00760C4C  8D 14 19                  LEA EDX,[ECX + EBX*0x1]
00760C4F  2B CB                     SUB ECX,EBX
00760C51  8B D9                     MOV EBX,ECX
00760C53  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00760C56  03 CF                     ADD ECX,EDI
00760C58  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00760C5B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00760C5E  2B F9                     SUB EDI,ECX
00760C60  8D 0C BF                  LEA ECX,[EDI + EDI*0x4]
00760C63  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00760C66  8D 0C 8F                  LEA ECX,[EDI + ECX*0x4]
00760C69  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00760C6C  D1 E1                     SHL ECX,0x1
00760C6E  C1 F9 08                  SAR ECX,0x8
00760C71  2B CF                     SUB ECX,EDI
00760C73  03 FA                     ADD EDI,EDX
00760C75  2B 55 08                  SUB EDX,dword ptr [EBP + 0x8]
00760C78  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00760C7B  8D 14 19                  LEA EDX,[ECX + EBX*0x1]
00760C7E  2B D9                     SUB EBX,ECX
00760C80  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00760C83  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00760C86  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00760C89  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
00760C8C  8D 1C 11                  LEA EBX,[ECX + EDX*0x1]
00760C8F  2B D1                     SUB EDX,ECX
00760C91  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00760C94  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00760C97  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00760C9A  03 D9                     ADD EBX,ECX
00760C9C  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00760C9F  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00760CA2  2B CB                     SUB ECX,EBX
00760CA4  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00760CA7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00760CAA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00760CAD  03 CB                     ADD ECX,EBX
00760CAF  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00760CB2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00760CB5  03 CA                     ADD ECX,EDX
00760CB7  8B D9                     MOV EBX,ECX
00760CB9  C1 E3 04                  SHL EBX,0x4
00760CBC  2B D9                     SUB EBX,ECX
00760CBE  C1 E3 02                  SHL EBX,0x2
00760CC1  2B D9                     SUB EBX,ECX
00760CC3  8D 1C D9                  LEA EBX,[ECX + EBX*0x8]
00760CC6  8D 0C D5 00 00 00 00      LEA ECX,[EDX*0x8 + 0x0]
00760CCD  2B CA                     SUB ECX,EDX
00760CCF  C1 E1 05                  SHL ECX,0x5
00760CD2  2B CA                     SUB ECX,EDX
00760CD4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00760CD7  F7 D9                     NEG ECX
00760CD9  C1 FB 08                  SAR EBX,0x8
00760CDC  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00760CDF  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00760CE2  C1 F9 08                  SAR ECX,0x8
00760CE5  2B CA                     SUB ECX,EDX
00760CE7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00760CEA  03 CB                     ADD ECX,EBX
00760CEC  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00760CEF  2B D3                     SUB EDX,EBX
00760CF1  8D 1C 92                  LEA EBX,[EDX + EDX*0x4]
00760CF4  8D 1C DB                  LEA EBX,[EBX + EBX*0x8]
00760CF7  8D 14 9A                  LEA EDX,[EDX + EBX*0x4]
00760CFA  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00760CFD  D1 E2                     SHL EDX,0x1
00760CFF  C1 FA 08                  SAR EDX,0x8
00760D02  2B D1                     SUB EDX,ECX
00760D04  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00760D07  8D 14 5B                  LEA EDX,[EBX + EBX*0x2]
00760D0A  C1 E2 03                  SHL EDX,0x3
00760D0D  2B D3                     SUB EDX,EBX
00760D0F  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
00760D12  8D 14 93                  LEA EDX,[EBX + EDX*0x4]
00760D15  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00760D18  C1 FA 08                  SAR EDX,0x8
00760D1B  2B D3                     SUB EDX,EBX
00760D1D  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00760D20  03 D3                     ADD EDX,EBX
00760D22  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00760D25  03 DF                     ADD EBX,EDI
00760D27  C1 FB 05                  SAR EBX,0x5
00760D2A  81 E3 FF 03 00 00         AND EBX,0x3ff
00760D30  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
00760D33  88 18                     MOV byte ptr [EAX],BL
00760D35  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00760D38  2B FB                     SUB EDI,EBX
00760D3A  C1 FF 05                  SAR EDI,0x5
00760D3D  81 E7 FF 03 00 00         AND EDI,0x3ff
00760D43  8A 1C 37                  MOV BL,byte ptr [EDI + ESI*0x1]
00760D46  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
00760D49  88 58 07                  MOV byte ptr [EAX + 0x7],BL
00760D4C  8D 1C 39                  LEA EBX,[ECX + EDI*0x1]
00760D4F  2B F9                     SUB EDI,ECX
00760D51  C1 FB 05                  SAR EBX,0x5
00760D54  81 E3 FF 03 00 00         AND EBX,0x3ff
00760D5A  C1 FF 05                  SAR EDI,0x5
00760D5D  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
00760D60  81 E7 FF 03 00 00         AND EDI,0x3ff
00760D66  88 58 01                  MOV byte ptr [EAX + 0x1],BL
00760D69  8A 0C 37                  MOV CL,byte ptr [EDI + ESI*0x1]
00760D6C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00760D6F  88 48 06                  MOV byte ptr [EAX + 0x6],CL
00760D72  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00760D75  03 F9                     ADD EDI,ECX
00760D77  C1 FF 05                  SAR EDI,0x5
00760D7A  81 E7 FF 03 00 00         AND EDI,0x3ff
00760D80  8A 1C 37                  MOV BL,byte ptr [EDI + ESI*0x1]
00760D83  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00760D86  2B CF                     SUB ECX,EDI
00760D88  88 58 02                  MOV byte ptr [EAX + 0x2],BL
00760D8B  C1 F9 05                  SAR ECX,0x5
00760D8E  81 E1 FF 03 00 00         AND ECX,0x3ff
00760D94  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
00760D97  88 48 05                  MOV byte ptr [EAX + 0x5],CL
00760D9A  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00760D9D  8D 3C 0A                  LEA EDI,[EDX + ECX*0x1]
00760DA0  2B CA                     SUB ECX,EDX
00760DA2  C1 FF 05                  SAR EDI,0x5
00760DA5  81 E7 FF 03 00 00         AND EDI,0x3ff
00760DAB  C1 F9 05                  SAR ECX,0x5
00760DAE  8A 1C 37                  MOV BL,byte ptr [EDI + ESI*0x1]
00760DB1  81 E1 FF 03 00 00         AND ECX,0x3ff
00760DB7  88 58 04                  MOV byte ptr [EAX + 0x4],BL
00760DBA  8A 14 31                  MOV DL,byte ptr [ECX + ESI*0x1]
00760DBD  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00760DC0  88 50 03                  MOV byte ptr [EAX + 0x3],DL
LAB_00760dc3:
00760DC3  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00760DC6  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00760DC9  83 C1 20                  ADD ECX,0x20
00760DCC  83 C2 04                  ADD EDX,0x4
00760DCF  48                        DEC EAX
00760DD0  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00760DD3  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00760DD6  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00760DD9  0F 85 F3 FD FF FF         JNZ 0x00760bd2
00760DDF  5F                        POP EDI
00760DE0  5E                        POP ESI
00760DE1  5B                        POP EBX
00760DE2  8B E5                     MOV ESP,EBP
00760DE4  5D                        POP EBP
00760DE5  C2 14 00                  RET 0x14
