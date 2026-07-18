FUN_006e9af0:
006E9AF0  55                        PUSH EBP
006E9AF1  8B EC                     MOV EBP,ESP
006E9AF3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E9AF6  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E9AFC  53                        PUSH EBX
006E9AFD  56                        PUSH ESI
006E9AFE  3B D0                     CMP EDX,EAX
006E9B00  57                        PUSH EDI
006E9B01  0F 83 8B 01 00 00         JNC 0x006e9c92
006E9B07  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E9B0D  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E9B10  C1 E0 03                  SHL EAX,0x3
006E9B13  2B C2                     SUB EAX,EDX
006E9B15  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E9B18  8D 34 81                  LEA ESI,[ECX + EAX*0x4]
006E9B1B  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006E9B1E  F6 C4 80                  TEST AH,0x80
006E9B21  0F 84 6B 01 00 00         JZ 0x006e9c92
006E9B27  F6 46 04 01               TEST byte ptr [ESI + 0x4],0x1
006E9B2B  74 0C                     JZ 0x006e9b39
006E9B2D  8D 96 A0 00 00 00         LEA EDX,[ESI + 0xa0]
006E9B33  52                        PUSH EDX
006E9B34  E8 27 15 FC FF            CALL 0x006ab060
LAB_006e9b39:
006E9B39  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006E9B3C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E9B3F  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006E9B42  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006E9B45  83 E1 FE                  AND ECX,0xfffffffe
006E9B48  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
006E9B4B  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006E9B4E  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
006E9B51  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006E9B54  89 96 84 00 00 00         MOV dword ptr [ESI + 0x84],EDX
006E9B5A  89 4E 38                  MOV dword ptr [ESI + 0x38],ECX
006E9B5D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006E9B60  85 DB                     TEST EBX,EBX
006E9B62  89 86 88 00 00 00         MOV dword ptr [ESI + 0x88],EAX
006E9B68  89 8E A0 00 00 00         MOV dword ptr [ESI + 0xa0],ECX
006E9B6E  0F 8E 93 00 00 00         JLE 0x006e9c07
006E9B74  39 9E 94 00 00 00         CMP dword ptr [ESI + 0x94],EBX
006E9B7A  0F 84 85 00 00 00         JZ 0x006e9c05
006E9B80  8B 86 A4 00 00 00         MOV EAX,dword ptr [ESI + 0xa4]
006E9B86  8D 14 9D 00 00 00 00      LEA EDX,[EBX*0x4 + 0x0]
006E9B8D  52                        PUSH EDX
006E9B8E  50                        PUSH EAX
006E9B8F  E8 BC 33 FC FF            CALL 0x006acf50
006E9B94  8B D0                     MOV EDX,EAX
006E9B96  85 D2                     TEST EDX,EDX
006E9B98  89 96 A4 00 00 00         MOV dword ptr [ESI + 0xa4],EDX
006E9B9E  75 0C                     JNZ 0x006e9bac
006E9BA0  5F                        POP EDI
006E9BA1  5E                        POP ESI
006E9BA2  B8 FE FF FF FF            MOV EAX,0xfffffffe
006E9BA7  5B                        POP EBX
006E9BA8  5D                        POP EBP
006E9BA9  C2 20 00                  RET 0x20
LAB_006e9bac:
006E9BAC  8B BE 94 00 00 00         MOV EDI,dword ptr [ESI + 0x94]
006E9BB2  3B DF                     CMP EBX,EDI
006E9BB4  7E 1A                     JLE 0x006e9bd0
006E9BB6  8B CB                     MOV ECX,EBX
006E9BB8  33 C0                     XOR EAX,EAX
006E9BBA  2B CF                     SUB ECX,EDI
006E9BBC  8D 3C BA                  LEA EDI,[EDX + EDI*0x4]
006E9BBF  C1 E1 02                  SHL ECX,0x2
006E9BC2  8B D1                     MOV EDX,ECX
006E9BC4  C1 E9 02                  SHR ECX,0x2
006E9BC7  F3 AB                     STOSD.REP ES:EDI
006E9BC9  8B CA                     MOV ECX,EDX
006E9BCB  83 E1 03                  AND ECX,0x3
006E9BCE  F3 AA                     STOSB.REP ES:EDI
LAB_006e9bd0:
006E9BD0  8B 06                     MOV EAX,dword ptr [ESI]
006E9BD2  F6 C4 01                  TEST AH,0x1
006E9BD5  74 3E                     JZ 0x006e9c15
006E9BD7  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
006E9BDD  85 C0                     TEST EAX,EAX
006E9BDF  74 34                     JZ 0x006e9c15
006E9BE1  8D 0C DD 00 00 00 00      LEA ECX,[EBX*0x8 + 0x0]
006E9BE8  51                        PUSH ECX
006E9BE9  50                        PUSH EAX
006E9BEA  E8 61 33 FC FF            CALL 0x006acf50
006E9BEF  85 C0                     TEST EAX,EAX
006E9BF1  89 86 A8 00 00 00         MOV dword ptr [ESI + 0xa8],EAX
006E9BF7  75 1C                     JNZ 0x006e9c15
006E9BF9  5F                        POP EDI
006E9BFA  5E                        POP ESI
006E9BFB  B8 FE FF FF FF            MOV EAX,0xfffffffe
006E9C00  5B                        POP EBX
006E9C01  5D                        POP EBP
006E9C02  C2 20 00                  RET 0x20
LAB_006e9c05:
006E9C05  85 DB                     TEST EBX,EBX
LAB_006e9c07:
006E9C07  7D 0C                     JGE 0x006e9c15
006E9C09  8D 96 A4 00 00 00         LEA EDX,[ESI + 0xa4]
006E9C0F  52                        PUSH EDX
006E9C10  E8 4B 14 FC FF            CALL 0x006ab060
LAB_006e9c15:
006E9C15  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006E9C18  89 9E 94 00 00 00         MOV dword ptr [ESI + 0x94],EBX
006E9C1E  85 C0                     TEST EAX,EAX
006E9C20  7E 0E                     JLE 0x006e9c30
006E9C22  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006E9C25  85 C0                     TEST EAX,EAX
006E9C27  7E 07                     JLE 0x006e9c30
006E9C29  8B 06                     MOV EAX,dword ptr [ESI]
006E9C2B  80 CC 10                  OR AH,0x10
006E9C2E  89 06                     MOV dword ptr [ESI],EAX
LAB_006e9c30:
006E9C30  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006E9C33  85 C0                     TEST EAX,EAX
006E9C35  74 6A                     JZ 0x006e9ca1
006E9C37  8B 06                     MOV EAX,dword ptr [ESI]
006E9C39  F6 C4 10                  TEST AH,0x10
006E9C3C  75 06                     JNZ 0x006e9c44
006E9C3E  56                        PUSH ESI
006E9C3F  E8 FC EB FF FF            CALL 0x006e8840
LAB_006e9c44:
006E9C44  33 FF                     XOR EDI,EDI
006E9C46  85 DB                     TEST EBX,EBX
006E9C48  7E 57                     JLE 0x006e9ca1
LAB_006e9c4a:
006E9C4A  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
006E9C50  8B 4C F8 04               MOV ECX,dword ptr [EAX + EDI*0x8 + 0x4]
006E9C54  85 C9                     TEST ECX,ECX
006E9C56  74 2C                     JZ 0x006e9c84
006E9C58  8B 8E A4 00 00 00         MOV ECX,dword ptr [ESI + 0xa4]
006E9C5E  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006E9C61  85 C0                     TEST EAX,EAX
006E9C63  66 C7 44 B9 02 00 80      MOV word ptr [ECX + EDI*0x4 + 0x2],0x8000
006E9C6A  74 0F                     JZ 0x006e9c7b
006E9C6C  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
006E9C72  80 4C BA 03 40            OR byte ptr [EDX + EDI*0x4 + 0x3],0x40
006E9C77  8D 44 BA 02               LEA EAX,[EDX + EDI*0x4 + 0x2]
LAB_006e9c7b:
006E9C7B  6A FE                     PUSH -0x2
006E9C7D  57                        PUSH EDI
006E9C7E  56                        PUSH ESI
006E9C7F  E8 8C FD FF FF            CALL 0x006e9a10
LAB_006e9c84:
006E9C84  47                        INC EDI
006E9C85  3B FB                     CMP EDI,EBX
006E9C87  7C C1                     JL 0x006e9c4a
006E9C89  5F                        POP EDI
006E9C8A  5E                        POP ESI
006E9C8B  33 C0                     XOR EAX,EAX
006E9C8D  5B                        POP EBX
006E9C8E  5D                        POP EBP
006E9C8F  C2 20 00                  RET 0x20
LAB_006e9c92:
006E9C92  83 FA FF                  CMP EDX,-0x1
006E9C95  74 0A                     JZ 0x006e9ca1
006E9C97  68 B0 ED 7E 00            PUSH 0x7eedb0
006E9C9C  E8 AF EF FF FF            CALL 0x006e8c50
LAB_006e9ca1:
006E9CA1  5F                        POP EDI
006E9CA2  5E                        POP ESI
006E9CA3  33 C0                     XOR EAX,EAX
006E9CA5  5B                        POP EBX
006E9CA6  5D                        POP EBP
006E9CA7  C2 20 00                  RET 0x20
