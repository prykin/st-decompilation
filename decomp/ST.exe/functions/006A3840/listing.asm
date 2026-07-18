FUN_006a3840:
006A3840  55                        PUSH EBP
006A3841  8B EC                     MOV EBP,ESP
006A3843  83 EC 0C                  SUB ESP,0xc
006A3846  53                        PUSH EBX
006A3847  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006A384A  B8 74 FB 7D 00            MOV EAX,0x7dfb74
006A384F  56                        PUSH ESI
006A3850  57                        PUSH EDI
006A3851  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006a3854:
006A3854  8B 70 FC                  MOV ESI,dword ptr [EAX + -0x4]
006A3857  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006A385A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A385D  03 F7                     ADD ESI,EDI
006A385F  8B 38                     MOV EDI,dword ptr [EAX]
006A3861  03 FA                     ADD EDI,EDX
006A3863  85 F6                     TEST ESI,ESI
006A3865  7C 7A                     JL 0x006a38e1
006A3867  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A386A  3B 31                     CMP ESI,dword ptr [ECX]
006A386C  7D 73                     JGE 0x006a38e1
006A386E  85 FF                     TEST EDI,EDI
006A3870  7C 6F                     JL 0x006a38e1
006A3872  3B 79 04                  CMP EDI,dword ptr [ECX + 0x4]
006A3875  7D 6A                     JGE 0x006a38e1
006A3877  85 DB                     TEST EBX,EBX
006A3879  7C 66                     JL 0x006a38e1
006A387B  83 FB 06                  CMP EBX,0x6
006A387E  7D 61                     JGE 0x006a38e1
006A3880  68 FF 00 00 00            PUSH 0xff
006A3885  53                        PUSH EBX
006A3886  57                        PUSH EDI
006A3887  56                        PUSH ESI
006A3888  51                        PUSH ECX
006A3889  E8 22 E1 D5 FF            CALL 0x004019b0
006A388E  83 C4 14                  ADD ESP,0x14
006A3891  85 C0                     TEST EAX,EAX
006A3893  74 49                     JZ 0x006a38de
006A3895  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A3898  8D 45 F4                  LEA EAX,[EBP + -0xc]
006A389B  50                        PUSH EAX
006A389C  53                        PUSH EBX
006A389D  57                        PUSH EDI
006A389E  56                        PUSH ESI
006A389F  51                        PUSH ECX
006A38A0  E8 A7 08 D6 FF            CALL 0x0040414c
006A38A5  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A38A8  68 FF 00 00 00            PUSH 0xff
006A38AD  0F BF C0                  MOVSX EAX,AX
006A38B0  53                        PUSH EBX
006A38B1  52                        PUSH EDX
006A38B2  50                        PUSH EAX
006A38B3  8D 45 F4                  LEA EAX,[EBP + -0xc]
006A38B6  50                        PUSH EAX
006A38B7  E8 A2 14 D6 FF            CALL 0x00404d5e
006A38BC  83 C4 28                  ADD ESP,0x28
006A38BF  85 C0                     TEST EAX,EAX
006A38C1  74 1B                     JZ 0x006a38de
006A38C3  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A38C6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A38C9  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A38CC  51                        PUSH ECX
006A38CD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A38D0  52                        PUSH EDX
006A38D1  50                        PUSH EAX
006A38D2  53                        PUSH EBX
006A38D3  57                        PUSH EDI
006A38D4  56                        PUSH ESI
006A38D5  51                        PUSH ECX
006A38D6  E8 2D 1A D6 FF            CALL 0x00405308
006A38DB  83 C4 1C                  ADD ESP,0x1c
LAB_006a38de:
006A38DE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006a38e1:
006A38E1  83 C0 08                  ADD EAX,0x8
006A38E4  3D 94 FB 7D 00            CMP EAX,0x7dfb94
006A38E9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006A38EC  0F 8C 62 FF FF FF         JL 0x006a3854
006A38F2  5F                        POP EDI
006A38F3  5E                        POP ESI
006A38F4  B8 01 00 00 00            MOV EAX,0x1
006A38F9  5B                        POP EBX
006A38FA  8B E5                     MOV ESP,EBP
006A38FC  5D                        POP EBP
006A38FD  C3                        RET
