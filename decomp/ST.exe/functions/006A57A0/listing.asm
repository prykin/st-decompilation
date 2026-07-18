FUN_006a57a0:
006A57A0  55                        PUSH EBP
006A57A1  8B EC                     MOV EBP,ESP
006A57A3  57                        PUSH EDI
006A57A4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006A57A7  85 FF                     TEST EDI,EDI
006A57A9  75 23                     JNZ 0x006a57ce
006A57AB  68 04 C9 7E 00            PUSH 0x7ec904
006A57B0  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A57B5  57                        PUSH EDI
006A57B6  57                        PUSH EDI
006A57B7  57                        PUSH EDI
006A57B8  57                        PUSH EDI
006A57B9  E8 E2 B7 08 00            CALL 0x00730fa0
006A57BE  83 C4 18                  ADD ESP,0x18
006A57C1  83 F8 01                  CMP EAX,0x1
006A57C4  0F 85 97 00 00 00         JNZ 0x006a5861
006A57CA  CC                        INT3
LAB_006a57ce:
006A57CE  A1 6C 49 85 00            MOV EAX,[0x0085496c]
006A57D3  B9 05 00 00 00            MOV ECX,0x5
006A57D8  89 07                     MOV dword ptr [EDI],EAX
006A57DA  8D 47 04                  LEA EAX,[EDI + 0x4]
LAB_006a57dd:
006A57DD  C7 40 14 00 00 00 00      MOV dword ptr [EAX + 0x14],0x0
006A57E4  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006A57EA  83 C0 04                  ADD EAX,0x4
006A57ED  49                        DEC ECX
006A57EE  75 ED                     JNZ 0x006a57dd
006A57F0  56                        PUSH ESI
006A57F1  8B 35 6C 49 85 00         MOV ESI,dword ptr [0x0085496c]
006A57F7  85 F6                     TEST ESI,ESI
006A57F9  74 54                     JZ 0x006a584f
LAB_006a57fb:
006A57FB  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006A57FE  25 FF FF 00 00            AND EAX,0xffff
006A5803  7C 28                     JL 0x006a582d
006A5805  83 F8 05                  CMP EAX,0x5
006A5808  7D 23                     JGE 0x006a582d
006A580A  8B 4C 87 04               MOV ECX,dword ptr [EDI + EAX*0x4 + 0x4]
006A580E  41                        INC ECX
006A580F  89 4C 87 04               MOV dword ptr [EDI + EAX*0x4 + 0x4],ECX
006A5813  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006A5816  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006A5819  81 E1 FF FF 00 00         AND ECX,0xffff
006A581F  8D 44 8F 18               LEA EAX,[EDI + ECX*0x4 + 0x18]
006A5823  8B 4C 8F 18               MOV ECX,dword ptr [EDI + ECX*0x4 + 0x18]
006A5827  03 CA                     ADD ECX,EDX
006A5829  89 08                     MOV dword ptr [EAX],ECX
006A582B  EB 1C                     JMP 0x006a5849
LAB_006a582d:
006A582D  56                        PUSH ESI
006A582E  68 D8 C8 7E 00            PUSH 0x7ec8d8
006A5833  6A 00                     PUSH 0x0
006A5835  6A 00                     PUSH 0x0
006A5837  6A 00                     PUSH 0x0
006A5839  6A 00                     PUSH 0x0
006A583B  E8 60 B7 08 00            CALL 0x00730fa0
006A5840  83 C4 18                  ADD ESP,0x18
006A5843  83 F8 01                  CMP EAX,0x1
006A5846  75 01                     JNZ 0x006a5849
006A5848  CC                        INT3
LAB_006a5849:
006A5849  8B 36                     MOV ESI,dword ptr [ESI]
006A584B  85 F6                     TEST ESI,ESI
006A584D  75 AC                     JNZ 0x006a57fb
LAB_006a584f:
006A584F  A1 48 4A 85 00            MOV EAX,[0x00854a48]
006A5854  5E                        POP ESI
006A5855  89 47 2C                  MOV dword ptr [EDI + 0x2c],EAX
006A5858  8B 0D 68 49 85 00         MOV ECX,dword ptr [0x00854968]
006A585E  89 4F 30                  MOV dword ptr [EDI + 0x30],ECX
LAB_006a5861:
006A5861  5F                        POP EDI
006A5862  5D                        POP EBP
006A5863  C3                        RET
