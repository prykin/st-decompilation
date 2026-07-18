FUN_006a0470:
006A0470  55                        PUSH EBP
006A0471  8B EC                     MOV EBP,ESP
006A0473  83 EC 14                  SUB ESP,0x14
006A0476  53                        PUSH EBX
006A0477  56                        PUSH ESI
006A0478  8B F1                     MOV ESI,ECX
006A047A  57                        PUSH EDI
006A047B  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006A047E  8B 08                     MOV ECX,dword ptr [EAX]
006A0480  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
006A0483  C1 E1 03                  SHL ECX,0x3
006A0486  89 8E 03 57 00 00         MOV dword ptr [ESI + 0x5703],ECX
006A048C  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006A048F  8B D1                     MOV EDX,ECX
006A0491  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006A0494  C1 E0 03                  SHL EAX,0x3
006A0497  0F AF D0                  IMUL EDX,EAX
006A049A  52                        PUSH EDX
006A049B  89 86 07 57 00 00         MOV dword ptr [ESI + 0x5707],EAX
006A04A1  E8 CA A7 00 00            CALL 0x006aac70
006A04A6  8B 8E 03 57 00 00         MOV ECX,dword ptr [ESI + 0x5703]
006A04AC  8B F8                     MOV EDI,EAX
006A04AE  0F AF 8E 07 57 00 00      IMUL ECX,dword ptr [ESI + 0x5707]
006A04B5  8B D1                     MOV EDX,ECX
006A04B7  33 C0                     XOR EAX,EAX
006A04B9  C1 E9 02                  SHR ECX,0x2
006A04BC  89 BE FF 56 00 00         MOV dword ptr [ESI + 0x56ff],EDI
006A04C2  33 DB                     XOR EBX,EBX
006A04C4  F3 AB                     STOSD.REP ES:EDI
006A04C6  8B CA                     MOV ECX,EDX
006A04C8  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006A04CB  83 E1 03                  AND ECX,0x3
006A04CE  F3 AA                     STOSB.REP ES:EDI
006A04D0  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006A04D3  39 18                     CMP dword ptr [EAX],EBX
006A04D5  0F 8E 64 01 00 00         JLE 0x006a063f
006A04DB  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006A04DE  EB 02                     JMP 0x006a04e2
LAB_006a04e0:
006A04E0  33 DB                     XOR EBX,EBX
LAB_006a04e2:
006A04E2  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006A04E5  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006A04E8  3B CB                     CMP ECX,EBX
006A04EA  0F 8E 32 01 00 00         JLE 0x006a0622
LAB_006a04f0:
006A04F0  33 FF                     XOR EDI,EDI
LAB_006a04f2:
006A04F2  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006A04F5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006A04F8  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006A04FB  0F AF CF                  IMUL ECX,EDI
006A04FE  03 CA                     ADD ECX,EDX
006A0500  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006A0503  0F AF 08                  IMUL ECX,dword ptr [EAX]
006A0506  03 CA                     ADD ECX,EDX
006A0508  8D 54 49 06               LEA EDX,[ECX + ECX*0x2 + 0x6]
006A050C  66 83 3C 50 00            CMP word ptr [EAX + EDX*0x2],0x0
006A0511  0F 84 E9 00 00 00         JZ 0x006a0600
006A0517  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006A051A  8D 54 48 08               LEA EDX,[EAX + ECX*0x2 + 0x8]
006A051E  8B 44 48 08               MOV EAX,dword ptr [EAX + ECX*0x2 + 0x8]
006A0522  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006A0525  66 8B 4A 04               MOV CX,word ptr [EDX + 0x4]
006A0529  66 89 4D F0               MOV word ptr [EBP + -0x10],CX
006A052D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006A0530  F6 C4 0F                  TEST AH,0xf
006A0533  0F 84 C7 00 00 00         JZ 0x006a0600
006A0539  66 81 F9 00 11            CMP CX,0x1100
006A053E  0F 84 BC 00 00 00         JZ 0x006a0600
006A0544  8B C8                     MOV ECX,EAX
006A0546  81 E1 00 20 00 00         AND ECX,0x2000
006A054C  81 F9 00 20 00 00         CMP ECX,0x2000
006A0552  75 5B                     JNZ 0x006a05af
006A0554  C1 E8 08                  SHR EAX,0x8
006A0557  83 E0 0F                  AND EAX,0xf
006A055A  8B D7                     MOV EDX,EDI
006A055C  6A 00                     PUSH 0x0
006A055E  50                        PUSH EAX
006A055F  2B D0                     SUB EDX,EAX
006A0561  8A 45 F0                  MOV AL,byte ptr [EBP + -0x10]
006A0564  8A C8                     MOV CL,AL
006A0566  24 0F                     AND AL,0xf
006A0568  C0 E9 04                  SHR CL,0x4
006A056B  83 E1 0F                  AND ECX,0xf
006A056E  42                        INC EDX
006A056F  66 0F B6 C0               MOVZX AX,AL
006A0573  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006A0576  52                        PUSH EDX
006A0577  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
006A057A  8D 4C 02 F2               LEA ECX,[EDX + EAX*0x1 + -0xe]
006A057E  51                        PUSH ECX
006A057F  8D 8E 03 1C 00 00         LEA ECX,[ESI + 0x1c03]
006A0585  E8 6E 21 D6 FF            CALL 0x004026f8
006A058A  85 C0                     TEST EAX,EAX
006A058C  74 72                     JZ 0x006a0600
006A058E  8B 96 07 57 00 00         MOV EDX,dword ptr [ESI + 0x5707]
006A0594  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A0597  6A 28                     PUSH 0x28
006A0599  6A 28                     PUSH 0x28
006A059B  50                        PUSH EAX
006A059C  8B 86 03 57 00 00         MOV EAX,dword ptr [ESI + 0x5703]
006A05A2  52                        PUSH EDX
006A05A3  8B 96 FF 56 00 00         MOV EDX,dword ptr [ESI + 0x56ff]
006A05A9  50                        PUSH EAX
006A05AA  53                        PUSH EBX
006A05AB  51                        PUSH ECX
006A05AC  52                        PUSH EDX
006A05AD  EB 49                     JMP 0x006a05f8
LAB_006a05af:
006A05AF  25 FF FF 00 00            AND EAX,0xffff
006A05B4  8B D7                     MOV EDX,EDI
006A05B6  8B C8                     MOV ECX,EAX
006A05B8  25 FF 00 00 00            AND EAX,0xff
006A05BD  C1 E9 08                  SHR ECX,0x8
006A05C0  83 E1 0F                  AND ECX,0xf
006A05C3  2B D1                     SUB EDX,ECX
006A05C5  51                        PUSH ECX
006A05C6  42                        INC EDX
006A05C7  48                        DEC EAX
006A05C8  52                        PUSH EDX
006A05C9  50                        PUSH EAX
006A05CA  8D 8E 03 1C 00 00         LEA ECX,[ESI + 0x1c03]
006A05D0  E8 C1 28 D6 FF            CALL 0x00402e96
006A05D5  85 C0                     TEST EAX,EAX
006A05D7  74 27                     JZ 0x006a0600
006A05D9  8B 8E 03 57 00 00         MOV ECX,dword ptr [ESI + 0x5703]
006A05DF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A05E2  6A 28                     PUSH 0x28
006A05E4  6A 28                     PUSH 0x28
006A05E6  50                        PUSH EAX
006A05E7  8B 86 07 57 00 00         MOV EAX,dword ptr [ESI + 0x5707]
006A05ED  50                        PUSH EAX
006A05EE  8B 86 FF 56 00 00         MOV EAX,dword ptr [ESI + 0x56ff]
006A05F4  51                        PUSH ECX
006A05F5  53                        PUSH EBX
006A05F6  52                        PUSH EDX
006A05F7  50                        PUSH EAX
LAB_006a05f8:
006A05F8  E8 8D 2A D6 FF            CALL 0x0040308a
006A05FD  83 C4 20                  ADD ESP,0x20
LAB_006a0600:
006A0600  47                        INC EDI
006A0601  83 FF 06                  CMP EDI,0x6
006A0604  0F 8C E8 FE FF FF         JL 0x006a04f2
006A060A  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006A060D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006A0610  40                        INC EAX
006A0611  83 C3 28                  ADD EBX,0x28
006A0614  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006A0617  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006A061A  3B C2                     CMP EAX,EDX
006A061C  0F 8C CE FE FF FF         JL 0x006a04f0
LAB_006a0622:
006A0622  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006A0625  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A0628  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006A062B  41                        INC ECX
006A062C  8B 10                     MOV EDX,dword ptr [EAX]
006A062E  83 C7 28                  ADD EDI,0x28
006A0631  3B CA                     CMP ECX,EDX
006A0633  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006A0636  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006A0639  0F 8C A1 FE FF FF         JL 0x006a04e0
LAB_006a063f:
006A063F  5F                        POP EDI
006A0640  5E                        POP ESI
006A0641  5B                        POP EBX
006A0642  8B E5                     MOV ESP,EBP
006A0644  5D                        POP EBP
006A0645  C3                        RET
