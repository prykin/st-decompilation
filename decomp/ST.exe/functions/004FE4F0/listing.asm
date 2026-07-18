FUN_004fe4f0:
004FE4F0  55                        PUSH EBP
004FE4F1  8B EC                     MOV EBP,ESP
004FE4F3  83 EC 58                  SUB ESP,0x58
004FE4F6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004FE4F9  53                        PUSH EBX
004FE4FA  56                        PUSH ESI
004FE4FB  57                        PUSH EDI
004FE4FC  85 D2                     TEST EDX,EDX
004FE4FE  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004FE501  74 08                     JZ 0x004fe50b
004FE503  8B 81 84 01 00 00         MOV EAX,dword ptr [ECX + 0x184]
004FE509  EB 06                     JMP 0x004fe511
LAB_004fe50b:
004FE50B  8B 81 9C 01 00 00         MOV EAX,dword ptr [ECX + 0x19c]
LAB_004fe511:
004FE511  85 D2                     TEST EDX,EDX
004FE513  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004FE516  74 08                     JZ 0x004fe520
004FE518  8A 81 7E 0B 00 00         MOV AL,byte ptr [ECX + 0xb7e]
004FE51E  EB 06                     JMP 0x004fe526
LAB_004fe520:
004FE520  8A 81 6C 0C 00 00         MOV AL,byte ptr [ECX + 0xc6c]
LAB_004fe526:
004FE526  85 D2                     TEST EDX,EDX
004FE528  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
004FE52B  74 0B                     JZ 0x004fe538
004FE52D  8A 89 65 0B 00 00         MOV CL,byte ptr [ECX + 0xb65]
004FE533  88 4D FF                  MOV byte ptr [EBP + -0x1],CL
004FE536  EB 09                     JMP 0x004fe541
LAB_004fe538:
004FE538  8A 91 53 0C 00 00         MOV DL,byte ptr [ECX + 0xc53]
004FE53E  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
LAB_004fe541:
004FE541  3C 64                     CMP AL,0x64
004FE543  0F 87 0C 01 00 00         JA 0x004fe655
004FE549  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004FE54E  8D 55 AC                  LEA EDX,[EBP + -0x54]
004FE551  8D 4D A8                  LEA ECX,[EBP + -0x58]
004FE554  6A 00                     PUSH 0x0
004FE556  52                        PUSH EDX
004FE557  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
004FE55A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FE560  E8 8B F2 22 00            CALL 0x0072d7f0
004FE565  8B F0                     MOV ESI,EAX
004FE567  83 C4 08                  ADD ESP,0x8
004FE56A  85 F6                     TEST ESI,ESI
004FE56C  0F 85 AA 00 00 00         JNZ 0x004fe61c
004FE572  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004FE575  8A 5D F8                  MOV BL,byte ptr [EBP + -0x8]
004FE578  25 FF 00 00 00            AND EAX,0xff
004FE57D  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
004FE584  2B C8                     SUB ECX,EAX
004FE586  B8 CD CC CC CC            MOV EAX,0xcccccccd
004FE58B  F7 E1                     MUL ECX
004FE58D  C1 EA 03                  SHR EDX,0x3
004FE590  84 DB                     TEST BL,BL
004FE592  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
004FE595  76 08                     JBE 0x004fe59f
004FE597  84 D2                     TEST DL,DL
004FE599  75 04                     JNZ 0x004fe59f
004FE59B  C6 45 F4 01               MOV byte ptr [EBP + -0xc],0x1
LAB_004fe59f:
004FE59F  80 FB 46                  CMP BL,0x46
004FE5A2  72 04                     JC 0x004fe5a8
004FE5A4  33 C0                     XOR EAX,EAX
004FE5A6  EB 0B                     JMP 0x004fe5b3
LAB_004fe5a8:
004FE5A8  80 FB 14                  CMP BL,0x14
004FE5AB  1B C0                     SBB EAX,EAX
004FE5AD  83 E0 06                  AND EAX,0x6
004FE5B0  83 C0 06                  ADD EAX,0x6
LAB_004fe5b3:
004FE5B3  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004FE5B6  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
004FE5B9  81 E2 FF 00 00 00         AND EDX,0xff
004FE5BF  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004FE5C2  6A 06                     PUSH 0x6
004FE5C4  52                        PUSH EDX
004FE5C5  50                        PUSH EAX
004FE5C6  8B 86 86 02 00 00         MOV EAX,dword ptr [ESI + 0x286]
004FE5CC  6A 00                     PUSH 0x0
004FE5CE  6A 00                     PUSH 0x0
004FE5D0  50                        PUSH EAX
004FE5D1  6A 1F                     PUSH 0x1f
004FE5D3  6A 05                     PUSH 0x5
004FE5D5  6A 00                     PUSH 0x0
004FE5D7  57                        PUSH EDI
004FE5D8  E8 13 70 1B 00            CALL 0x006b55f0
004FE5DD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FE5E0  85 C0                     TEST EAX,EAX
004FE5E2  75 11                     JNZ 0x004fe5f5
004FE5E4  80 7D FF 02               CMP byte ptr [EBP + -0x1],0x2
004FE5E8  75 0B                     JNZ 0x004fe5f5
004FE5EA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004FE5ED  68 BA 36 00 00            PUSH 0x36ba
004FE5F2  51                        PUSH ECX
004FE5F3  EB 0A                     JMP 0x004fe5ff
LAB_004fe5f5:
004FE5F5  B2 64                     MOV DL,0x64
004FE5F7  68 B1 36 00 00            PUSH 0x36b1
004FE5FC  2A D3                     SUB DL,BL
004FE5FE  52                        PUSH EDX
LAB_004fe5ff:
004FE5FF  6A 27                     PUSH 0x27
004FE601  6A 05                     PUSH 0x5
004FE603  57                        PUSH EDI
004FE604  8B CE                     MOV ECX,ESI
004FE606  E8 72 66 F0 FF            CALL 0x00404c7d
004FE60B  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
004FE60E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004FE613  5F                        POP EDI
004FE614  5E                        POP ESI
004FE615  5B                        POP EBX
004FE616  8B E5                     MOV ESP,EBP
004FE618  5D                        POP EBP
004FE619  C2 04 00                  RET 0x4
LAB_004fe61c:
004FE61C  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
004FE61F  68 0C 24 7C 00            PUSH 0x7c240c
004FE624  68 CC 4C 7A 00            PUSH 0x7a4ccc
004FE629  56                        PUSH ESI
004FE62A  6A 00                     PUSH 0x0
004FE62C  6A 2F                     PUSH 0x2f
004FE62E  68 CC 23 7C 00            PUSH 0x7c23cc
004FE633  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FE639  E8 92 EE 1A 00            CALL 0x006ad4d0
004FE63E  83 C4 18                  ADD ESP,0x18
004FE641  85 C0                     TEST EAX,EAX
004FE643  74 01                     JZ 0x004fe646
004FE645  CC                        INT3
LAB_004fe646:
004FE646  6A 2F                     PUSH 0x2f
004FE648  68 CC 23 7C 00            PUSH 0x7c23cc
004FE64D  6A 00                     PUSH 0x0
004FE64F  56                        PUSH ESI
004FE650  E8 EB 77 1A 00            CALL 0x006a5e40
LAB_004fe655:
004FE655  5F                        POP EDI
004FE656  5E                        POP ESI
004FE657  5B                        POP EBX
004FE658  8B E5                     MOV ESP,EBP
004FE65A  5D                        POP EBP
004FE65B  C2 04 00                  RET 0x4
