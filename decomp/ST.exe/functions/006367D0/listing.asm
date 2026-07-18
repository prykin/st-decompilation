FUN_006367d0:
006367D0  55                        PUSH EBP
006367D1  8B EC                     MOV EBP,ESP
006367D3  83 EC 20                  SUB ESP,0x20
006367D6  53                        PUSH EBX
006367D7  56                        PUSH ESI
006367D8  8B F1                     MOV ESI,ECX
006367DA  57                        PUSH EDI
006367DB  33 FF                     XOR EDI,EDI
006367DD  B9 01 00 00 00            MOV ECX,0x1
006367E2  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
006367E5  8B C1                     MOV EAX,ECX
006367E7  3B D7                     CMP EDX,EDI
006367E9  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006367EC  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006367EF  0F 84 1A 06 00 00         JZ 0x00636e0f
006367F5  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
006367FB  8B 9A E4 00 00 00         MOV EBX,dword ptr [EDX + 0xe4]
00636801  8B 56 30                  MOV EDX,dword ptr [ESI + 0x30]
00636804  2B DA                     SUB EBX,EDX
00636806  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00636809  2B D7                     SUB EDX,EDI
0063680B  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0063680E  0F 84 F4 02 00 00         JZ 0x00636b08
00636814  4A                        DEC EDX
00636815  74 0E                     JZ 0x00636825
00636817  4A                        DEC EDX
00636818  0F 84 EA 02 00 00         JZ 0x00636b08
0063681E  5F                        POP EDI
0063681F  5E                        POP ESI
00636820  5B                        POP EBX
00636821  8B E5                     MOV ESP,EBP
00636823  5D                        POP EBP
00636824  C3                        RET
LAB_00636825:
00636825  8B C3                     MOV EAX,EBX
00636827  0F AF C3                  IMUL EAX,EBX
0063682A  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0063682D  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
00636830  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00636835  F7 E2                     MUL EDX
00636837  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0063683A  0F AF C3                  IMUL EAX,EBX
0063683D  C1 EA 05                  SHR EDX,0x5
00636840  2B C2                     SUB EAX,EDX
00636842  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00636845  03 C2                     ADD EAX,EDX
00636847  3D 2C 01 00 00            CMP EAX,0x12c
0063684C  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0063684F  7C 03                     JL 0x00636854
00636851  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_00636854:
00636854  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00636857  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0063685A  3B C7                     CMP EAX,EDI
0063685C  0F 8E 81 02 00 00         JLE 0x00636ae3
00636862  EB 02                     JMP 0x00636866
LAB_00636864:
00636864  33 FF                     XOR EDI,EDI
LAB_00636866:
00636866  8B 06                     MOV EAX,dword ptr [ESI]
00636868  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0063686B  8B D0                     MOV EDX,EAX
0063686D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00636870  0F AF D1                  IMUL EDX,ECX
00636873  3B 4E 24                  CMP ECX,dword ptr [ESI + 0x24]
00636876  0F 85 FD 01 00 00         JNZ 0x00636a79
0063687C  3B C7                     CMP EAX,EDI
0063687E  0F 8E 4B 02 00 00         JLE 0x00636acf
00636884  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
LAB_00636887:
00636887  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
0063688A  3B 50 0C                  CMP EDX,dword ptr [EAX + 0xc]
0063688D  0F 83 CF 01 00 00         JNC 0x00636a62
00636893  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
00636896  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00636899  0F AF FA                  IMUL EDI,EDX
0063689C  03 F9                     ADD EDI,ECX
0063689E  85 FF                     TEST EDI,EDI
006368A0  0F 84 BC 01 00 00         JZ 0x00636a62
006368A6  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006368A9  85 C0                     TEST EAX,EAX
006368AB  74 0C                     JZ 0x006368b9
006368AD  C7 47 08 00 00 00 00      MOV dword ptr [EDI + 0x8],0x0
006368B4  E9 A9 01 00 00            JMP 0x00636a62
LAB_006368b9:
006368B9  E8 02 7E 0F 00            CALL 0x0072e6c0
006368BE  8D 0C 5B                  LEA ECX,[EBX + EBX*0x2]
006368C1  33 D2                     XOR EDX,EDX
006368C3  D1 E9                     SHR ECX,0x1
006368C5  83 C1 1F                  ADD ECX,0x1f
006368C8  F7 F1                     DIV ECX
006368CA  8B DA                     MOV EBX,EDX
006368CC  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006368CF  E8 EC 7D 0F 00            CALL 0x0072e6c0
006368D4  8B C8                     MOV ECX,EAX
006368D6  81 E1 01 00 00 80         AND ECX,0x80000001
006368DC  79 05                     JNS 0x006368e3
006368DE  49                        DEC ECX
006368DF  83 C9 FE                  OR ECX,0xfffffffe
006368E2  41                        INC ECX
LAB_006368e3:
006368E3  8B 57 26                  MOV EDX,dword ptr [EDI + 0x26]
006368E6  B8 AD 8B DB 68            MOV EAX,0x68db8bad
006368EB  F7 D9                     NEG ECX
006368ED  1B C9                     SBB ECX,ECX
006368EF  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006368F2  8B 57 2A                  MOV EDX,dword ptr [EDI + 0x2a]
006368F5  83 E1 02                  AND ECX,0x2
006368F8  49                        DEC ECX
006368F9  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006368FC  0F AF D1                  IMUL EDX,ECX
006368FF  0F AF D3                  IMUL EDX,EBX
00636902  F7 EA                     IMUL EDX
00636904  8B DA                     MOV EBX,EDX
00636906  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00636909  0F AF 56 1C               IMUL EDX,dword ptr [ESI + 0x1c]
0063690D  C1 FB 0C                  SAR EBX,0xc
00636910  8B C3                     MOV EAX,EBX
00636912  C1 E8 1F                  SHR EAX,0x1f
00636915  03 D8                     ADD EBX,EAX
00636917  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0063691C  F7 EA                     IMUL EDX
0063691E  C1 FA 0C                  SAR EDX,0xc
00636921  8B C2                     MOV EAX,EDX
00636923  03 D3                     ADD EDX,EBX
00636925  C1 E8 1F                  SHR EAX,0x1f
00636928  03 C2                     ADD EAX,EDX
0063692A  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0063692D  03 C2                     ADD EAX,EDX
0063692F  89 47 0E                  MOV dword ptr [EDI + 0xe],EAX
00636932  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00636935  0F AF C1                  IMUL EAX,ECX
00636938  0F AF 45 F4               IMUL EAX,dword ptr [EBP + -0xc]
0063693C  8B C8                     MOV ECX,EAX
0063693E  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00636943  F7 E9                     IMUL ECX
00636945  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00636948  0F AF 46 1C               IMUL EAX,dword ptr [ESI + 0x1c]
0063694C  C1 FA 0C                  SAR EDX,0xc
0063694F  8B CA                     MOV ECX,EDX
00636951  C1 E9 1F                  SHR ECX,0x1f
00636954  03 D1                     ADD EDX,ECX
00636956  8B C8                     MOV ECX,EAX
00636958  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0063695D  8B DA                     MOV EBX,EDX
0063695F  F7 E9                     IMUL ECX
00636961  C1 FA 0C                  SAR EDX,0xc
00636964  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00636967  8B C2                     MOV EAX,EDX
00636969  C1 E8 1F                  SHR EAX,0x1f
0063696C  03 D0                     ADD EDX,EAX
0063696E  B8 AB AA AA AA            MOV EAX,0xaaaaaaab
00636973  2B D3                     SUB EDX,EBX
00636975  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
00636978  03 D1                     ADD EDX,ECX
0063697A  89 57 12                  MOV dword ptr [EDI + 0x12],EDX
0063697D  F7 E3                     MUL EBX
0063697F  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00636982  C7 47 1A 04 00 00 00      MOV dword ptr [EDI + 0x1a],0x4
00636989  C1 EA 02                  SHR EDX,0x2
0063698C  89 4F 16                  MOV dword ptr [EDI + 0x16],ECX
0063698F  8D 42 04                  LEA EAX,[EDX + 0x4]
00636992  83 F8 0A                  CMP EAX,0xa
00636995  89 47 1E                  MOV dword ptr [EDI + 0x1e],EAX
00636998  7E 07                     JLE 0x006369a1
0063699A  C7 47 1E 0A 00 00 00      MOV dword ptr [EDI + 0x1e],0xa
LAB_006369a1:
006369A1  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
006369A4  8B 4F 0E                  MOV ECX,dword ptr [EDI + 0xe]
006369A7  83 C2 04                  ADD EDX,0x4
006369AA  B8 79 19 8C 02            MOV EAX,0x28c1979
006369AF  85 C9                     TEST ECX,ECX
006369B1  89 57 22                  MOV dword ptr [EDI + 0x22],EDX
006369B4  7C 13                     JL 0x006369c9
006369B6  F7 E9                     IMUL ECX
006369B8  D1 FA                     SAR EDX,0x1
006369BA  8B C2                     MOV EAX,EDX
006369BC  C1 E8 1F                  SHR EAX,0x1f
006369BF  03 D0                     ADD EDX,EAX
006369C1  0F BF CA                  MOVSX ECX,DX
006369C4  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006369C7  EB 12                     JMP 0x006369db
LAB_006369c9:
006369C9  F7 E9                     IMUL ECX
006369CB  D1 FA                     SAR EDX,0x1
006369CD  8B C2                     MOV EAX,EDX
006369CF  C1 E8 1F                  SHR EAX,0x1f
006369D2  03 D0                     ADD EDX,EAX
006369D4  0F BF C2                  MOVSX EAX,DX
006369D7  48                        DEC EAX
006369D8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_006369db:
006369DB  8B 57 12                  MOV EDX,dword ptr [EDI + 0x12]
006369DE  B8 79 19 8C 02            MOV EAX,0x28c1979
006369E3  85 D2                     TEST EDX,EDX
006369E5  7C 10                     JL 0x006369f7
006369E7  F7 EA                     IMUL EDX
006369E9  D1 FA                     SAR EDX,0x1
006369EB  8B CA                     MOV ECX,EDX
006369ED  C1 E9 1F                  SHR ECX,0x1f
006369F0  03 D1                     ADD EDX,ECX
006369F2  0F BF CA                  MOVSX ECX,DX
006369F5  EB 0F                     JMP 0x00636a06
LAB_006369f7:
006369F7  F7 EA                     IMUL EDX
006369F9  D1 FA                     SAR EDX,0x1
006369FB  8B C2                     MOV EAX,EDX
006369FD  C1 E8 1F                  SHR EAX,0x1f
00636A00  03 D0                     ADD EDX,EAX
00636A02  0F BF CA                  MOVSX ECX,DX
00636A05  49                        DEC ECX
LAB_00636a06:
00636A06  8B 57 16                  MOV EDX,dword ptr [EDI + 0x16]
00636A09  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00636A0E  85 D2                     TEST EDX,EDX
00636A10  7C 11                     JL 0x00636a23
00636A12  F7 EA                     IMUL EDX
00636A14  C1 FA 06                  SAR EDX,0x6
00636A17  8B C2                     MOV EAX,EDX
00636A19  C1 E8 1F                  SHR EAX,0x1f
00636A1C  03 D0                     ADD EDX,EAX
00636A1E  0F BF C2                  MOVSX EAX,DX
00636A21  EB 10                     JMP 0x00636a33
LAB_00636a23:
00636A23  F7 EA                     IMUL EDX
00636A25  C1 FA 06                  SAR EDX,0x6
00636A28  8B C2                     MOV EAX,EDX
00636A2A  C1 E8 1F                  SHR EAX,0x1f
00636A2D  03 D0                     ADD EDX,EAX
00636A2F  0F BF C2                  MOVSX EAX,DX
00636A32  48                        DEC EAX
LAB_00636a33:
00636A33  50                        PUSH EAX
00636A34  51                        PUSH ECX
00636A35  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00636A38  51                        PUSH ECX
00636A39  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00636A3F  E8 F7 E2 DC FF            CALL 0x00404d3b
00636A44  85 C0                     TEST EAX,EAX
00636A46  75 05                     JNZ 0x00636a4d
00636A48  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
00636A4B  EB 07                     JMP 0x00636a54
LAB_00636a4d:
00636A4D  C7 47 08 01 00 00 00      MOV dword ptr [EDI + 0x8],0x1
LAB_00636a54:
00636A54  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00636A57  C6 47 0C 01               MOV byte ptr [EDI + 0xc],0x1
00636A5B  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
LAB_00636a62:
00636A62  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00636A65  8B 0E                     MOV ECX,dword ptr [ESI]
00636A67  40                        INC EAX
00636A68  42                        INC EDX
00636A69  3B C1                     CMP EAX,ECX
00636A6B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00636A6E  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00636A71  0F 8C 10 FE FF FF         JL 0x00636887
00636A77  EB 56                     JMP 0x00636acf
LAB_00636a79:
00636A79  3B C7                     CMP EAX,EDI
00636A7B  7E 52                     JLE 0x00636acf
00636A7D  8B FA                     MOV EDI,EDX
LAB_00636a7f:
00636A7F  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
00636A82  3B 7A 0C                  CMP EDI,dword ptr [EDX + 0xc]
00636A85  73 3A                     JNC 0x00636ac1
00636A87  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00636A8A  8B 4A 1C                  MOV ECX,dword ptr [EDX + 0x1c]
00636A8D  0F AF C7                  IMUL EAX,EDI
00636A90  03 C1                     ADD EAX,ECX
00636A92  85 C0                     TEST EAX,EAX
00636A94  74 2B                     JZ 0x00636ac1
00636A96  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00636A99  B9 01 00 00 00            MOV ECX,0x1
00636A9E  3B D1                     CMP EDX,ECX
00636AA0  75 1F                     JNZ 0x00636ac1
00636AA2  8B 50 1E                  MOV EDX,dword ptr [EAX + 0x1e]
00636AA5  C6 40 0C 00               MOV byte ptr [EAX + 0xc],0x0
00636AA9  42                        INC EDX
00636AAA  3B 50 22                  CMP EDX,dword ptr [EAX + 0x22]
00636AAD  89 50 1E                  MOV dword ptr [EAX + 0x1e],EDX
00636AB0  7C 09                     JL 0x00636abb
00636AB2  C7 40 08 00 00 00 00      MOV dword ptr [EAX + 0x8],0x0
00636AB9  EB 06                     JMP 0x00636ac1
LAB_00636abb:
00636ABB  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
00636ABE  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_00636ac1:
00636AC1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00636AC4  8B 0E                     MOV ECX,dword ptr [ESI]
00636AC6  40                        INC EAX
00636AC7  47                        INC EDI
00636AC8  3B C1                     CMP EAX,ECX
00636ACA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00636ACD  7C B0                     JL 0x00636a7f
LAB_00636acf:
00636ACF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00636AD2  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00636AD5  40                        INC EAX
00636AD6  3B C1                     CMP EAX,ECX
00636AD8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00636ADB  0F 8C 83 FD FF FF         JL 0x00636864
00636AE1  33 FF                     XOR EDI,EDI
LAB_00636ae3:
00636AE3  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00636AE6  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00636AE9  42                        INC EDX
00636AEA  8B C2                     MOV EAX,EDX
00636AEC  89 56 24                  MOV dword ptr [ESI + 0x24],EDX
00636AEF  3B C1                     CMP EAX,ECX
00636AF1  7C 03                     JL 0x00636af6
00636AF3  89 7E 24                  MOV dword ptr [ESI + 0x24],EDI
LAB_00636af6:
00636AF6  39 7D F4                  CMP dword ptr [EBP + -0xc],EDI
00636AF9  0F 84 0B 03 00 00         JZ 0x00636e0a
00636AFF  5F                        POP EDI
00636B00  5E                        POP ESI
00636B01  33 C0                     XOR EAX,EAX
00636B03  5B                        POP EBX
00636B04  8B E5                     MOV ESP,EBP
00636B06  5D                        POP EBP
00636B07  C3                        RET
LAB_00636b08:
00636B08  8B C3                     MOV EAX,EBX
00636B0A  0F AF C3                  IMUL EAX,EBX
00636B0D  8B D0                     MOV EDX,EAX
00636B0F  C1 E2 05                  SHL EDX,0x5
00636B12  03 D0                     ADD EDX,EAX
00636B14  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00636B19  F7 E2                     MUL EDX
00636B1B  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
00636B1E  0F AF C3                  IMUL EAX,EBX
00636B21  C1 EA 05                  SHR EDX,0x5
00636B24  2B C2                     SUB EAX,EDX
00636B26  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00636B29  03 C2                     ADD EAX,EDX
00636B2B  3D F4 01 00 00            CMP EAX,0x1f4
00636B30  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00636B33  7C 03                     JL 0x00636b38
00636B35  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_00636b38:
00636B38  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00636B3B  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00636B3E  85 C0                     TEST EAX,EAX
00636B40  0F 8E 9D 02 00 00         JLE 0x00636de3
LAB_00636b46:
00636B46  8B 06                     MOV EAX,dword ptr [ESI]
00636B48  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00636B4B  8B D0                     MOV EDX,EAX
00636B4D  0F AF D7                  IMUL EDX,EDI
00636B50  3B F9                     CMP EDI,ECX
00636B52  0F 85 2A 02 00 00         JNZ 0x00636d82
00636B58  85 C0                     TEST EAX,EAX
00636B5A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00636B61  0F 8E 6D 02 00 00         JLE 0x00636dd4
00636B67  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_00636b6a:
00636B6A  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
00636B6D  3B 50 0C                  CMP EDX,dword ptr [EAX + 0xc]
00636B70  0F 83 F5 01 00 00         JNC 0x00636d6b
00636B76  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
00636B79  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00636B7C  0F AF FA                  IMUL EDI,EDX
00636B7F  03 F9                     ADD EDI,ECX
00636B81  85 FF                     TEST EDI,EDI
00636B83  0F 84 E2 01 00 00         JZ 0x00636d6b
00636B89  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00636B8C  85 C0                     TEST EAX,EAX
00636B8E  74 0C                     JZ 0x00636b9c
00636B90  C7 47 08 00 00 00 00      MOV dword ptr [EDI + 0x8],0x0
00636B97  E9 CF 01 00 00            JMP 0x00636d6b
LAB_00636b9c:
00636B9C  E8 1F 7B 0F 00            CALL 0x0072e6c0
00636BA1  8D 0C 5B                  LEA ECX,[EBX + EBX*0x2]
00636BA4  33 D2                     XOR EDX,EDX
00636BA6  D1 E9                     SHR ECX,0x1
00636BA8  83 C1 1F                  ADD ECX,0x1f
00636BAB  F7 F1                     DIV ECX
00636BAD  8B DA                     MOV EBX,EDX
00636BAF  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00636BB2  E8 09 7B 0F 00            CALL 0x0072e6c0
00636BB7  8B C8                     MOV ECX,EAX
00636BB9  81 E1 01 00 00 80         AND ECX,0x80000001
00636BBF  79 05                     JNS 0x00636bc6
00636BC1  49                        DEC ECX
00636BC2  83 C9 FE                  OR ECX,0xfffffffe
00636BC5  41                        INC ECX
LAB_00636bc6:
00636BC6  8B 57 26                  MOV EDX,dword ptr [EDI + 0x26]
00636BC9  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00636BCE  F7 D9                     NEG ECX
00636BD0  1B C9                     SBB ECX,ECX
00636BD2  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00636BD5  8B 57 2A                  MOV EDX,dword ptr [EDI + 0x2a]
00636BD8  83 E1 02                  AND ECX,0x2
00636BDB  49                        DEC ECX
00636BDC  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00636BDF  0F AF D1                  IMUL EDX,ECX
00636BE2  0F AF D3                  IMUL EDX,EBX
00636BE5  F7 EA                     IMUL EDX
00636BE7  8B DA                     MOV EBX,EDX
00636BE9  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00636BEC  0F AF 56 1C               IMUL EDX,dword ptr [ESI + 0x1c]
00636BF0  C1 FB 0C                  SAR EBX,0xc
00636BF3  8B C3                     MOV EAX,EBX
00636BF5  C1 E8 1F                  SHR EAX,0x1f
00636BF8  03 D8                     ADD EBX,EAX
00636BFA  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00636BFF  F7 EA                     IMUL EDX
00636C01  C1 FA 0C                  SAR EDX,0xc
00636C04  8B C2                     MOV EAX,EDX
00636C06  03 D3                     ADD EDX,EBX
00636C08  C1 E8 1F                  SHR EAX,0x1f
00636C0B  03 C2                     ADD EAX,EDX
00636C0D  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00636C10  03 C2                     ADD EAX,EDX
00636C12  89 47 0E                  MOV dword ptr [EDI + 0xe],EAX
00636C15  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00636C18  0F AF C1                  IMUL EAX,ECX
00636C1B  0F AF 45 F4               IMUL EAX,dword ptr [EBP + -0xc]
00636C1F  8B C8                     MOV ECX,EAX
00636C21  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00636C26  F7 E9                     IMUL ECX
00636C28  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00636C2B  0F AF 46 1C               IMUL EAX,dword ptr [ESI + 0x1c]
00636C2F  C1 FA 0C                  SAR EDX,0xc
00636C32  8B CA                     MOV ECX,EDX
00636C34  C1 E9 1F                  SHR ECX,0x1f
00636C37  03 D1                     ADD EDX,ECX
00636C39  8B C8                     MOV ECX,EAX
00636C3B  B8 AD 8B DB 68            MOV EAX,0x68db8bad
00636C40  8B DA                     MOV EBX,EDX
00636C42  F7 E9                     IMUL ECX
00636C44  C1 FA 0C                  SAR EDX,0xc
00636C47  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00636C4A  8B C2                     MOV EAX,EDX
00636C4C  C1 E8 1F                  SHR EAX,0x1f
00636C4F  03 D0                     ADD EDX,EAX
00636C51  2B D3                     SUB EDX,EBX
00636C53  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
00636C56  03 D1                     ADD EDX,ECX
00636C58  89 57 12                  MOV dword ptr [EDI + 0x12],EDX
00636C5B  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00636C5E  89 4F 16                  MOV dword ptr [EDI + 0x16],ECX
00636C61  C7 47 1A 04 00 00 00      MOV dword ptr [EDI + 0x1a],0x4
00636C68  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00636C6B  85 C0                     TEST EAX,EAX
00636C6D  B8 AB AA AA AA            MOV EAX,0xaaaaaaab
00636C72  75 24                     JNZ 0x00636c98
00636C74  F7 E3                     MUL EBX
00636C76  C1 EA 02                  SHR EDX,0x2
00636C79  8D 42 04                  LEA EAX,[EDX + 0x4]
00636C7C  83 F8 0A                  CMP EAX,0xa
00636C7F  89 47 1E                  MOV dword ptr [EDI + 0x1e],EAX
00636C82  7E 07                     JLE 0x00636c8b
00636C84  C7 47 1E 0A 00 00 00      MOV dword ptr [EDI + 0x1e],0xa
LAB_00636c8b:
00636C8B  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00636C8E  8B 47 1E                  MOV EAX,dword ptr [EDI + 0x1e]
00636C91  03 D0                     ADD EDX,EAX
00636C93  89 57 22                  MOV dword ptr [EDI + 0x22],EDX
00636C96  EB 12                     JMP 0x00636caa
LAB_00636c98:
00636C98  F7 E3                     MUL EBX
00636C9A  D1 EA                     SHR EDX,0x1
00636C9C  8D 42 04                  LEA EAX,[EDX + 0x4]
00636C9F  89 47 1E                  MOV dword ptr [EDI + 0x1e],EAX
00636CA2  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00636CA5  03 C1                     ADD EAX,ECX
00636CA7  89 47 22                  MOV dword ptr [EDI + 0x22],EAX
LAB_00636caa:
00636CAA  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00636CAD  8B 4F 0E                  MOV ECX,dword ptr [EDI + 0xe]
00636CB0  83 C0 04                  ADD EAX,0x4
00636CB3  89 47 22                  MOV dword ptr [EDI + 0x22],EAX
00636CB6  B8 79 19 8C 02            MOV EAX,0x28c1979
00636CBB  85 C9                     TEST ECX,ECX
00636CBD  7C 13                     JL 0x00636cd2
00636CBF  F7 E9                     IMUL ECX
00636CC1  D1 FA                     SAR EDX,0x1
00636CC3  8B CA                     MOV ECX,EDX
00636CC5  C1 E9 1F                  SHR ECX,0x1f
00636CC8  03 D1                     ADD EDX,ECX
00636CCA  0F BF D2                  MOVSX EDX,DX
00636CCD  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00636CD0  EB 12                     JMP 0x00636ce4
LAB_00636cd2:
00636CD2  F7 E9                     IMUL ECX
00636CD4  D1 FA                     SAR EDX,0x1
00636CD6  8B C2                     MOV EAX,EDX
00636CD8  C1 E8 1F                  SHR EAX,0x1f
00636CDB  03 D0                     ADD EDX,EAX
00636CDD  0F BF C2                  MOVSX EAX,DX
00636CE0  48                        DEC EAX
00636CE1  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00636ce4:
00636CE4  8B 57 12                  MOV EDX,dword ptr [EDI + 0x12]
00636CE7  B8 79 19 8C 02            MOV EAX,0x28c1979
00636CEC  85 D2                     TEST EDX,EDX
00636CEE  7C 10                     JL 0x00636d00
00636CF0  F7 EA                     IMUL EDX
00636CF2  D1 FA                     SAR EDX,0x1
00636CF4  8B CA                     MOV ECX,EDX
00636CF6  C1 E9 1F                  SHR ECX,0x1f
00636CF9  03 D1                     ADD EDX,ECX
00636CFB  0F BF CA                  MOVSX ECX,DX
00636CFE  EB 0F                     JMP 0x00636d0f
LAB_00636d00:
00636D00  F7 EA                     IMUL EDX
00636D02  D1 FA                     SAR EDX,0x1
00636D04  8B C2                     MOV EAX,EDX
00636D06  C1 E8 1F                  SHR EAX,0x1f
00636D09  03 D0                     ADD EDX,EAX
00636D0B  0F BF CA                  MOVSX ECX,DX
00636D0E  49                        DEC ECX
LAB_00636d0f:
00636D0F  8B 57 16                  MOV EDX,dword ptr [EDI + 0x16]
00636D12  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00636D17  85 D2                     TEST EDX,EDX
00636D19  7C 11                     JL 0x00636d2c
00636D1B  F7 EA                     IMUL EDX
00636D1D  C1 FA 06                  SAR EDX,0x6
00636D20  8B C2                     MOV EAX,EDX
00636D22  C1 E8 1F                  SHR EAX,0x1f
00636D25  03 D0                     ADD EDX,EAX
00636D27  0F BF C2                  MOVSX EAX,DX
00636D2A  EB 10                     JMP 0x00636d3c
LAB_00636d2c:
00636D2C  F7 EA                     IMUL EDX
00636D2E  C1 FA 06                  SAR EDX,0x6
00636D31  8B C2                     MOV EAX,EDX
00636D33  C1 E8 1F                  SHR EAX,0x1f
00636D36  03 D0                     ADD EDX,EAX
00636D38  0F BF C2                  MOVSX EAX,DX
00636D3B  48                        DEC EAX
LAB_00636d3c:
00636D3C  50                        PUSH EAX
00636D3D  51                        PUSH ECX
00636D3E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00636D41  51                        PUSH ECX
00636D42  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00636D48  E8 EE DF DC FF            CALL 0x00404d3b
00636D4D  85 C0                     TEST EAX,EAX
00636D4F  75 05                     JNZ 0x00636d56
00636D51  89 47 08                  MOV dword ptr [EDI + 0x8],EAX
00636D54  EB 07                     JMP 0x00636d5d
LAB_00636d56:
00636D56  C7 47 08 01 00 00 00      MOV dword ptr [EDI + 0x8],0x1
LAB_00636d5d:
00636D5D  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00636D60  C6 47 0C 01               MOV byte ptr [EDI + 0xc],0x1
00636D64  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
LAB_00636d6b:
00636D6B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00636D6E  8B 0E                     MOV ECX,dword ptr [ESI]
00636D70  40                        INC EAX
00636D71  42                        INC EDX
00636D72  3B C1                     CMP EAX,ECX
00636D74  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00636D77  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00636D7A  0F 8C EA FD FF FF         JL 0x00636b6a
00636D80  EB 4F                     JMP 0x00636dd1
LAB_00636d82:
00636D82  33 C9                     XOR ECX,ECX
00636D84  85 C0                     TEST EAX,EAX
00636D86  7E 4C                     JLE 0x00636dd4
00636D88  8B FA                     MOV EDI,EDX
LAB_00636d8a:
00636D8A  8B 56 2C                  MOV EDX,dword ptr [ESI + 0x2c]
00636D8D  3B 7A 0C                  CMP EDI,dword ptr [EDX + 0xc]
00636D90  73 37                     JNC 0x00636dc9
00636D92  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00636D95  0F AF C7                  IMUL EAX,EDI
00636D98  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
00636D9B  85 C0                     TEST EAX,EAX
00636D9D  74 2A                     JZ 0x00636dc9
00636D9F  83 78 08 01               CMP dword ptr [EAX + 0x8],0x1
00636DA3  75 24                     JNZ 0x00636dc9
00636DA5  8B 50 1E                  MOV EDX,dword ptr [EAX + 0x1e]
00636DA8  C6 40 0C 00               MOV byte ptr [EAX + 0xc],0x0
00636DAC  42                        INC EDX
00636DAD  3B 50 22                  CMP EDX,dword ptr [EAX + 0x22]
00636DB0  89 50 1E                  MOV dword ptr [EAX + 0x1e],EDX
00636DB3  7C 09                     JL 0x00636dbe
00636DB5  C7 40 08 00 00 00 00      MOV dword ptr [EAX + 0x8],0x0
00636DBC  EB 0B                     JMP 0x00636dc9
LAB_00636dbe:
00636DBE  BA 01 00 00 00            MOV EDX,0x1
00636DC3  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
00636DC6  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_00636dc9:
00636DC9  8B 06                     MOV EAX,dword ptr [ESI]
00636DCB  41                        INC ECX
00636DCC  47                        INC EDI
00636DCD  3B C8                     CMP ECX,EAX
00636DCF  7C B9                     JL 0x00636d8a
LAB_00636dd1:
00636DD1  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_00636dd4:
00636DD4  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00636DD7  47                        INC EDI
00636DD8  3B F8                     CMP EDI,EAX
00636DDA  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00636DDD  0F 8C 63 FD FF FF         JL 0x00636b46
LAB_00636de3:
00636DE3  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
00636DE6  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00636DE9  42                        INC EDX
00636DEA  8B C2                     MOV EAX,EDX
00636DEC  89 56 24                  MOV dword ptr [ESI + 0x24],EDX
00636DEF  3B C1                     CMP EAX,ECX
00636DF1  7C 07                     JL 0x00636dfa
00636DF3  C7 46 24 00 00 00 00      MOV dword ptr [ESI + 0x24],0x0
LAB_00636dfa:
00636DFA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00636DFD  85 C0                     TEST EAX,EAX
00636DFF  74 09                     JZ 0x00636e0a
00636E01  5F                        POP EDI
00636E02  5E                        POP ESI
00636E03  33 C0                     XOR EAX,EAX
00636E05  5B                        POP EBX
00636E06  8B E5                     MOV ESP,EBP
00636E08  5D                        POP EBP
00636E09  C3                        RET
LAB_00636e0a:
00636E0A  B8 01 00 00 00            MOV EAX,0x1
LAB_00636e0f:
00636E0F  5F                        POP EDI
00636E10  5E                        POP ESI
00636E11  5B                        POP EBX
00636E12  8B E5                     MOV ESP,EBP
00636E14  5D                        POP EBP
00636E15  C3                        RET
