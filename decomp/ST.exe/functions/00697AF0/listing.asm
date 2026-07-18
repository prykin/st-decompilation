FUN_00697af0:
00697AF0  55                        PUSH EBP
00697AF1  8B EC                     MOV EBP,ESP
00697AF3  83 EC 1C                  SUB ESP,0x1c
00697AF6  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00697AF9  33 C0                     XOR EAX,EAX
00697AFB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00697AFE  53                        PUSH EBX
00697AFF  56                        PUSH ESI
00697B00  57                        PUSH EDI
00697B01  8B 51 15                  MOV EDX,dword ptr [ECX + 0x15]
00697B04  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00697B07  3B D0                     CMP EDX,EAX
00697B09  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00697B0C  0F 84 D8 00 00 00         JZ 0x00697bea
00697B12  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
00697B15  33 C9                     XOR ECX,ECX
00697B17  3B F0                     CMP ESI,EAX
00697B19  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00697B1C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00697B1F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00697B22  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00697B25  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
00697B28  0F 8E BC 00 00 00         JLE 0x00697bea
00697B2E  EB 05                     JMP 0x00697b35
LAB_00697b30:
00697B30  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00697B33  33 C0                     XOR EAX,EAX
LAB_00697b35:
00697B35  3B CE                     CMP ECX,ESI
00697B37  73 0B                     JNC 0x00697b44
00697B39  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00697B3C  8B 72 1C                  MOV ESI,dword ptr [EDX + 0x1c]
00697B3F  0F AF C1                  IMUL EAX,ECX
00697B42  03 C6                     ADD EAX,ESI
LAB_00697b44:
00697B44  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
00697B47  84 D2                     TEST DL,DL
00697B49  75 4E                     JNZ 0x00697b99
00697B4B  8B 70 02                  MOV ESI,dword ptr [EAX + 0x2]
00697B4E  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00697B51  8B C6                     MOV EAX,ESI
00697B53  8B BA 33 58 00 00         MOV EDI,dword ptr [EDX + 0x5833]
00697B59  99                        CDQ
00697B5A  F7 FF                     IDIV EDI
00697B5C  8B D8                     MOV EBX,EAX
00697B5E  8B C6                     MOV EAX,ESI
00697B60  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00697B63  99                        CDQ
00697B64  F7 FF                     IDIV EDI
00697B66  46                        INC ESI
00697B67  85 C9                     TEST ECX,ECX
00697B69  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00697B6C  75 0B                     JNZ 0x00697b79
00697B6E  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00697B71  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00697B74  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00697B77  EB 1D                     JMP 0x00697b96
LAB_00697b79:
00697B79  39 55 08                  CMP dword ptr [EBP + 0x8],EDX
00697B7C  7E 03                     JLE 0x00697b81
00697B7E  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_00697b81:
00697B81  39 5D F8                  CMP dword ptr [EBP + -0x8],EBX
00697B84  7E 03                     JLE 0x00697b89
00697B86  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_00697b89:
00697B89  39 55 F4                  CMP dword ptr [EBP + -0xc],EDX
00697B8C  7D 03                     JGE 0x00697b91
00697B8E  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_00697b91:
00697B91  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
00697B94  7D 03                     JGE 0x00697b99
LAB_00697b96:
00697B96  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_00697b99:
00697B99  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00697B9C  41                        INC ECX
00697B9D  3B CE                     CMP ECX,ESI
00697B9F  7C 8F                     JL 0x00697b30
00697BA1  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00697BA4  85 C0                     TEST EAX,EAX
00697BA6  74 40                     JZ 0x00697be8
00697BA8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00697BAB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00697BAE  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00697BB1  8B F9                     MOV EDI,ECX
00697BB3  8B DA                     MOV EBX,EDX
00697BB5  2B FE                     SUB EDI,ESI
00697BB7  2B 5D 08                  SUB EBX,dword ptr [EBP + 0x8]
00697BBA  47                        INC EDI
00697BBB  43                        INC EBX
00697BBC  0F AF FB                  IMUL EDI,EBX
00697BBF  3B C7                     CMP EAX,EDI
00697BC1  75 25                     JNZ 0x00697be8
00697BC3  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00697BC6  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00697BC9  B8 01 00 00 00            MOV EAX,0x1
00697BCE  89 1F                     MOV dword ptr [EDI],EBX
00697BD0  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00697BD3  89 37                     MOV dword ptr [EDI],ESI
00697BD5  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00697BD8  5F                        POP EDI
00697BD9  89 16                     MOV dword ptr [ESI],EDX
00697BDB  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00697BDE  5E                        POP ESI
00697BDF  5B                        POP EBX
00697BE0  89 0A                     MOV dword ptr [EDX],ECX
00697BE2  8B E5                     MOV ESP,EBP
00697BE4  5D                        POP EBP
00697BE5  C2 14 00                  RET 0x14
LAB_00697be8:
00697BE8  33 C0                     XOR EAX,EAX
LAB_00697bea:
00697BEA  5F                        POP EDI
00697BEB  5E                        POP ESI
00697BEC  5B                        POP EBX
00697BED  8B E5                     MOV ESP,EBP
00697BEF  5D                        POP EBP
00697BF0  C2 14 00                  RET 0x14
