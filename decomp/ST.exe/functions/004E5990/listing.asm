FUN_004e5990:
004E5990  55                        PUSH EBP
004E5991  8B EC                     MOV EBP,ESP
004E5993  51                        PUSH ECX
004E5994  53                        PUSH EBX
004E5995  57                        PUSH EDI
004E5996  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004E5999  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004E599C  85 FF                     TEST EDI,EDI
004E599E  7C 46                     JL 0x004e59e6
004E59A0  83 FF 08                  CMP EDI,0x8
004E59A3  7D 41                     JGE 0x004e59e6
004E59A5  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004E59A8  83 FB 01                  CMP EBX,0x1
004E59AB  7C 39                     JL 0x004e59e6
004E59AD  81 FB 9B 00 00 00         CMP EBX,0x9b
004E59B3  7D 31                     JGE 0x004e59e6
004E59B5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E59B8  85 C0                     TEST EAX,EAX
004E59BA  7C 2A                     JL 0x004e59e6
004E59BC  56                        PUSH ESI
004E59BD  53                        PUSH EBX
004E59BE  57                        PUSH EDI
004E59BF  E8 8B F8 F1 FF            CALL 0x0040524f
004E59C4  8B F0                     MOV ESI,EAX
004E59C6  85 F6                     TEST ESI,ESI
004E59C8  74 11                     JZ 0x004e59db
004E59CA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E59CD  53                        PUSH EBX
004E59CE  57                        PUSH EDI
004E59CF  E8 39 F9 F1 FF            CALL 0x0040530d
004E59D4  39 45 10                  CMP dword ptr [EBP + 0x10],EAX
004E59D7  7E 02                     JLE 0x004e59db
004E59D9  33 F6                     XOR ESI,ESI
LAB_004e59db:
004E59DB  8B C6                     MOV EAX,ESI
004E59DD  5E                        POP ESI
004E59DE  5F                        POP EDI
004E59DF  5B                        POP EBX
004E59E0  8B E5                     MOV ESP,EBP
004E59E2  5D                        POP EBP
004E59E3  C2 0C 00                  RET 0xc
LAB_004e59e6:
004E59E6  5F                        POP EDI
004E59E7  33 C0                     XOR EAX,EAX
004E59E9  5B                        POP EBX
004E59EA  8B E5                     MOV ESP,EBP
004E59EC  5D                        POP EBP
004E59ED  C2 0C 00                  RET 0xc
