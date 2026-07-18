FUN_006ce770:
006CE770  55                        PUSH EBP
006CE771  8B EC                     MOV EBP,ESP
006CE773  53                        PUSH EBX
006CE774  56                        PUSH ESI
006CE775  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006CE778  57                        PUSH EDI
006CE779  8B 3D 8C BB 85 00         MOV EDI,dword ptr [0x0085bb8c]
006CE77F  8B 86 08 05 00 00         MOV EAX,dword ptr [ESI + 0x508]
006CE785  85 C0                     TEST EAX,EAX
006CE787  74 09                     JZ 0x006ce792
006CE789  8D 86 F0 04 00 00         LEA EAX,[ESI + 0x4f0]
006CE78F  50                        PUSH EAX
006CE790  FF D7                     CALL EDI
LAB_006ce792:
006CE792  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006CE799  74 09                     JZ 0x006ce7a4
006CE79B  8D 8E F0 04 00 00         LEA ECX,[ESI + 0x4f0]
006CE7A1  51                        PUSH ECX
006CE7A2  FF D7                     CALL EDI
LAB_006ce7a4:
006CE7A4  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006CE7A7  85 C0                     TEST EAX,EAX
006CE7A9  75 21                     JNZ 0x006ce7cc
006CE7AB  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006CE7B1  6A 19                     PUSH 0x19
006CE7B3  68 8C E1 7E 00            PUSH 0x7ee18c
006CE7B8  52                        PUSH EDX
006CE7B9  6A AF                     PUSH -0x51
006CE7BB  E8 80 76 FD FF            CALL 0x006a5e40
006CE7C0  5F                        POP EDI
006CE7C1  5E                        POP ESI
006CE7C2  B8 AF FF FF FF            MOV EAX,0xffffffaf
006CE7C7  5B                        POP EBX
006CE7C8  5D                        POP EBP
006CE7C9  C2 08 00                  RET 0x8
LAB_006ce7cc:
006CE7CC  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006CE7CF  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
LAB_006ce7d6:
006CE7D6  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006CE7D9  53                        PUSH EBX
006CE7DA  50                        PUSH EAX
006CE7DB  8B 08                     MOV ECX,dword ptr [EAX]
006CE7DD  FF 51 44                  CALL dword ptr [ECX + 0x44]
006CE7E0  8B F8                     MOV EDI,EAX
006CE7E2  85 FF                     TEST EDI,EDI
006CE7E4  74 2A                     JZ 0x006ce810
006CE7E6  81 FF C2 01 76 88         CMP EDI,0x887601c2
006CE7EC  75 08                     JNZ 0x006ce7f6
006CE7EE  56                        PUSH ESI
006CE7EF  E8 4C 04 00 00            CALL 0x006cec40
006CE7F4  EB 08                     JMP 0x006ce7fe
LAB_006ce7f6:
006CE7F6  81 FF 1C 02 76 88         CMP EDI,0x8876021c
006CE7FC  75 0E                     JNZ 0x006ce80c
LAB_006ce7fe:
006CE7FE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006CE801  40                        INC EAX
006CE802  3D 40 9C 00 00            CMP EAX,0x9c40
006CE807  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006CE80A  72 CA                     JC 0x006ce7d6
LAB_006ce80c:
006CE80C  85 FF                     TEST EDI,EDI
006CE80E  75 57                     JNZ 0x006ce867
LAB_006ce810:
006CE810  8B 96 B4 04 00 00         MOV EDX,dword ptr [ESI + 0x4b4]
006CE816  8B 03                     MOV EAX,dword ptr [EBX]
006CE818  6A 01                     PUSH 0x1
006CE81A  52                        PUSH EDX
006CE81B  50                        PUSH EAX
006CE81C  FF 15 94 BA 85 00         CALL dword ptr [0x0085ba94]
006CE822  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006CE825  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006CE828  89 86 B8 04 00 00         MOV dword ptr [ESI + 0x4b8],EAX
006CE82E  8B 03                     MOV EAX,dword ptr [EBX]
006CE830  6A 00                     PUSH 0x0
006CE832  51                        PUSH ECX
006CE833  52                        PUSH EDX
006CE834  50                        PUSH EAX
006CE835  FF 15 B0 BA 85 00         CALL dword ptr [0x0085bab0]
006CE83B  8B 86 94 04 00 00         MOV EAX,dword ptr [ESI + 0x494]
006CE841  85 C0                     TEST EAX,EAX
006CE843  74 0A                     JZ 0x006ce84f
006CE845  8B 0B                     MOV ECX,dword ptr [EBX]
006CE847  50                        PUSH EAX
006CE848  51                        PUSH ECX
006CE849  FF 15 AC BA 85 00         CALL dword ptr [0x0085baac]
LAB_006ce84f:
006CE84F  8B 56 40                  MOV EDX,dword ptr [ESI + 0x40]
006CE852  89 9E 7C 04 00 00         MOV dword ptr [ESI + 0x47c],EBX
006CE858  89 96 80 04 00 00         MOV dword ptr [ESI + 0x480],EDX
006CE85E  5F                        POP EDI
006CE85F  5E                        POP ESI
006CE860  33 C0                     XOR EAX,EAX
006CE862  5B                        POP EBX
006CE863  5D                        POP EBP
006CE864  C2 08 00                  RET 0x8
LAB_006ce867:
006CE867  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006CE86E  74 0D                     JZ 0x006ce87d
006CE870  8D 86 F0 04 00 00         LEA EAX,[ESI + 0x4f0]
006CE876  50                        PUSH EAX
006CE877  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006ce87d:
006CE87D  8B 86 08 05 00 00         MOV EAX,dword ptr [ESI + 0x508]
006CE883  85 C0                     TEST EAX,EAX
006CE885  74 0D                     JZ 0x006ce894
006CE887  81 C6 F0 04 00 00         ADD ESI,0x4f0
006CE88D  56                        PUSH ESI
006CE88E  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006ce894:
006CE894  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
006CE89A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006CE8A0  6A 30                     PUSH 0x30
006CE8A2  68 8C E1 7E 00            PUSH 0x7ee18c
006CE8A7  51                        PUSH ECX
006CE8A8  57                        PUSH EDI
006CE8A9  E8 92 75 FD FF            CALL 0x006a5e40
006CE8AE  8B C7                     MOV EAX,EDI
006CE8B0  5F                        POP EDI
006CE8B1  5E                        POP ESI
006CE8B2  5B                        POP EBX
006CE8B3  5D                        POP EBP
006CE8B4  C2 08 00                  RET 0x8
