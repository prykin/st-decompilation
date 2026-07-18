FUN_00617ca0:
00617CA0  55                        PUSH EBP
00617CA1  8B EC                     MOV EBP,ESP
00617CA3  83 EC 14                  SUB ESP,0x14
00617CA6  56                        PUSH ESI
00617CA7  8B F1                     MOV ESI,ECX
00617CA9  57                        PUSH EDI
00617CAA  33 FF                     XOR EDI,EDI
00617CAC  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
00617CAF  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00617CB2  3B CF                     CMP ECX,EDI
00617CB4  75 0A                     JNZ 0x00617cc0
00617CB6  5F                        POP EDI
00617CB7  33 C0                     XOR EAX,EAX
00617CB9  5E                        POP ESI
00617CBA  8B E5                     MOV ESP,EBP
00617CBC  5D                        POP EBP
00617CBD  C2 1C 00                  RET 0x1c
LAB_00617cc0:
00617CC0  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00617CC3  33 D2                     XOR EDX,EDX
00617CC5  F7 F1                     DIV ECX
00617CC7  3B CF                     CMP ECX,EDI
00617CC9  53                        PUSH EBX
00617CCA  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00617CCD  0F 8E 60 01 00 00         JLE 0x00617e33
00617CD3  8B C2                     MOV EAX,EDX
00617CD5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00617CD8  EB 03                     JMP 0x00617cdd
LAB_00617cda:
00617CDA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_00617cdd:
00617CDD  3B C1                     CMP EAX,ECX
00617CDF  7E 02                     JLE 0x00617ce3
00617CE1  2B C1                     SUB EAX,ECX
LAB_00617ce3:
00617CE3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00617CE6  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00617CE9  C1 E0 03                  SHL EAX,0x3
00617CEC  99                        CDQ
00617CED  F7 F9                     IDIV ECX
00617CEF  8B D8                     MOV EBX,EAX
00617CF1  53                        PUSH EBX
00617CF2  E8 59 82 09 00            CALL 0x006aff50
00617CF7  53                        PUSH EBX
00617CF8  8B F8                     MOV EDI,EAX
00617CFA  E8 5C 82 09 00            CALL 0x006aff5b
00617CFF  8D 0C BF                  LEA ECX,[EDI + EDI*0x4]
00617D02  8B D8                     MOV EBX,EAX
00617D04  C1 E1 03                  SHL ECX,0x3
00617D07  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00617D0C  83 C4 08                  ADD ESP,0x8
00617D0F  F7 E9                     IMUL ECX
00617D11  C1 FA 0C                  SAR EDX,0xc
00617D14  8B C2                     MOV EAX,EDX
00617D16  8D 0C 9B                  LEA ECX,[EBX + EBX*0x4]
00617D19  C1 E8 1F                  SHR EAX,0x1f
00617D1C  03 D0                     ADD EDX,EAX
00617D1E  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
00617D21  03 D0                     ADD EDX,EAX
00617D23  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00617D28  C1 E1 03                  SHL ECX,0x3
00617D2B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00617D2E  F7 E9                     IMUL ECX
00617D30  C1 FA 0C                  SAR EDX,0xc
00617D33  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00617D36  8B CA                     MOV ECX,EDX
00617D38  C1 E9 1F                  SHR ECX,0x1f
00617D3B  03 D1                     ADD EDX,ECX
00617D3D  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
00617D40  03 D1                     ADD EDX,ECX
00617D42  85 C0                     TEST EAX,EAX
00617D44  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00617D47  7C 46                     JL 0x00617d8f
00617D49  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00617D50  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00617D53  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00617D56  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
00617D59  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00617D5C  3B C8                     CMP ECX,EAX
00617D5E  7F 2F                     JG 0x00617d8f
00617D60  85 D2                     TEST EDX,EDX
00617D62  7C 2B                     JL 0x00617d8f
00617D64  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
00617D6B  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00617D6E  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
00617D71  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
00617D74  3B D0                     CMP EDX,EAX
00617D76  7F 17                     JG 0x00617d8f
00617D78  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00617D7B  52                        PUSH EDX
00617D7C  51                        PUSH ECX
00617D7D  8B CE                     MOV ECX,ESI
00617D7F  E8 75 94 DE FF            CALL 0x004011f9
00617D84  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00617D87  83 F8 01                  CMP EAX,0x1
00617D8A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00617D8D  74 1C                     JZ 0x00617dab
LAB_00617d8f:
00617D8F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00617D92  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00617D95  40                        INC EAX
00617D96  41                        INC ECX
00617D97  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00617D9A  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
00617D9D  3B C1                     CMP EAX,ECX
00617D9F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00617DA2  0F 8C 32 FF FF FF         JL 0x00617cda
00617DA8  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_00617dab:
00617DAB  85 C0                     TEST EAX,EAX
00617DAD  0F 84 80 00 00 00         JZ 0x00617e33
00617DB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00617DB6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00617DB9  89 08                     MOV dword ptr [EAX],ECX
00617DBB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00617DBE  89 10                     MOV dword ptr [EAX],EDX
00617DC0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00617DC3  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
00617DC6  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00617DC9  89 0A                     MOV dword ptr [EDX],ECX
00617DCB  33 D2                     XOR EDX,EDX
00617DCD  B9 28 00 00 00            MOV ECX,0x28
00617DD2  F7 F1                     DIV ECX
00617DD4  8B C7                     MOV EAX,EDI
00617DD6  C1 E0 04                  SHL EAX,0x4
00617DD9  2B C7                     SUB EAX,EDI
00617DDB  8B CA                     MOV ECX,EDX
00617DDD  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00617DE0  D1 E2                     SHL EDX,0x1
00617DE2  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00617DE7  F7 EA                     IMUL EDX
00617DE9  C1 FA 0C                  SAR EDX,0xc
00617DEC  8B C2                     MOV EAX,EDX
00617DEE  C1 E8 1F                  SHR EAX,0x1f
00617DF1  03 D0                     ADD EDX,EAX
00617DF3  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
00617DF6  03 D1                     ADD EDX,ECX
00617DF8  03 D0                     ADD EDX,EAX
00617DFA  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00617DFD  89 10                     MOV dword ptr [EAX],EDX
00617DFF  8B C3                     MOV EAX,EBX
00617E01  C1 E0 04                  SHL EAX,0x4
00617E04  2B C3                     SUB EAX,EBX
00617E06  8B 5E 44                  MOV EBX,dword ptr [ESI + 0x44]
00617E09  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00617E0C  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00617E11  D1 E2                     SHL EDX,0x1
00617E13  F7 EA                     IMUL EDX
00617E15  C1 FA 0C                  SAR EDX,0xc
00617E18  8B C2                     MOV EAX,EDX
00617E1A  C1 E8 1F                  SHR EAX,0x1f
00617E1D  03 D0                     ADD EDX,EAX
00617E1F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00617E22  03 D3                     ADD EDX,EBX
00617E24  03 D1                     ADD EDX,ECX
00617E26  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00617E29  89 11                     MOV dword ptr [ECX],EDX
00617E2B  8B 56 48                  MOV EDX,dword ptr [ESI + 0x48]
00617E2E  83 EA 32                  SUB EDX,0x32
00617E31  89 10                     MOV dword ptr [EAX],EDX
LAB_00617e33:
00617E33  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00617E36  5B                        POP EBX
00617E37  5F                        POP EDI
00617E38  5E                        POP ESI
00617E39  8B E5                     MOV ESP,EBP
00617E3B  5D                        POP EBP
00617E3C  C2 1C 00                  RET 0x1c
