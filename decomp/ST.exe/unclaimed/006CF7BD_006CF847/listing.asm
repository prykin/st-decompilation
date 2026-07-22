006CF7BD  83 F8 02                  CMP EAX,0x2
006CF7C0  75 32                     JNZ 0x006cf7f4
006CF7C2  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006CF7C5  52                        PUSH EDX
006CF7C6  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
006CF7CC  50                        PUSH EAX
006CF7CD  8B 95 48 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff48]
006CF7D3  52                        PUSH EDX
006CF7D4  57                        PUSH EDI
006CF7D5  51                        PUSH ECX
006CF7D6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006CF7D9  50                        PUSH EAX
006CF7DA  6A 00                     PUSH 0x0
006CF7DC  6A 00                     PUSH 0x0
006CF7DE  53                        PUSH EBX
006CF7DF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CF7E2  51                        PUSH ECX
006CF7E3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CF7E6  52                        PUSH EDX
006CF7E7  E8 94 A8 00 00            CALL 0x006da080
006CF7EC  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006CF7EF  E9 01 01 00 00            JMP 0x006cf8f5
006CF7F4  83 F8 01                  CMP EAX,0x1
006CF7F7  0F 85 F8 00 00 00         JNZ 0x006cf8f5
006CF7FD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CF800  8B 82 D0 01 00 00         MOV EAX,dword ptr [EDX + 0x1d0]
006CF806  85 C0                     TEST EAX,EAX
006CF808  74 49                     JZ 0x006cf853
006CF80A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006CF80D  8A 40 0D                  MOV AL,byte ptr [EAX + 0xd]
006CF810  24 03                     AND AL,0x3
006CF812  3C 01                     CMP AL,0x1
006CF814  75 3D                     JNZ 0x006cf853
006CF816  C7 45 FC 06 00 00 00      MOV dword ptr [EBP + -0x4],0x6
006CF81D  8B 56 64                  MOV EDX,dword ptr [ESI + 0x64]
006CF820  52                        PUSH EDX
006CF821  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
006CF824  50                        PUSH EAX
006CF825  8B 95 40 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff40]
006CF82B  52                        PUSH EDX
006CF82C  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
006CF832  50                        PUSH EAX
006CF833  57                        PUSH EDI
006CF834  51                        PUSH ECX
006CF835  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CF838  51                        PUSH ECX
006CF839  53                        PUSH EBX
006CF83A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CF83D  52                        PUSH EDX
006CF83E  E8 9D 8E 00 00            CALL 0x006d86e0
006CF843  E9 A6 00 00 00            JMP 0x006cf8ee
