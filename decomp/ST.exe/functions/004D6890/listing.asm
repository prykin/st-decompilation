FUN_004d6890:
004D6890  55                        PUSH EBP
004D6891  8B EC                     MOV EBP,ESP
004D6893  53                        PUSH EBX
004D6894  56                        PUSH ESI
004D6895  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004D6898  8B D9                     MOV EBX,ECX
004D689A  57                        PUSH EDI
004D689B  B9 0D 00 00 00            MOV ECX,0xd
004D68A0  33 C0                     XOR EAX,EAX
004D68A2  8B FE                     MOV EDI,ESI
004D68A4  F3 AB                     STOSD.REP ES:EDI
004D68A6  66 AB                     STOSW ES:EDI
004D68A8  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004D68AB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004D68B1  50                        PUSH EAX
004D68B2  E8 00 E1 F2 FF            CALL 0x004049b7
004D68B7  88 46 07                  MOV byte ptr [ESI + 0x7],AL
004D68BA  C6 06 01                  MOV byte ptr [ESI],0x1
004D68BD  8A 8B 1D 02 00 00         MOV CL,byte ptr [EBX + 0x21d]
004D68C3  C6 46 02 02               MOV byte ptr [ESI + 0x2],0x2
004D68C7  88 4E 01                  MOV byte ptr [ESI + 0x1],CL
004D68CA  8B 13                     MOV EDX,dword ptr [EBX]
004D68CC  8B CB                     MOV ECX,EBX
004D68CE  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
004D68D1  88 46 1B                  MOV byte ptr [ESI + 0x1b],AL
004D68D4  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
004D68DA  89 46 03                  MOV dword ptr [ESI + 0x3],EAX
004D68DD  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
004D68E0  89 4E 08                  MOV dword ptr [ESI + 0x8],ECX
004D68E3  33 C9                     XOR ECX,ECX
004D68E5  B8 FF FF 00 00            MOV EAX,0xffff
004D68EA  66 89 4E 1E               MOV word ptr [ESI + 0x1e],CX
004D68EE  66 89 46 26               MOV word ptr [ESI + 0x26],AX
004D68F2  66 89 4E 20               MOV word ptr [ESI + 0x20],CX
004D68F6  66 89 46 28               MOV word ptr [ESI + 0x28],AX
004D68FA  8B 83 65 02 00 00         MOV EAX,dword ptr [EBX + 0x265]
004D6900  2B F0                     SUB ESI,EAX
004D6902  5F                        POP EDI
004D6903  C6 46 2E 01               MOV byte ptr [ESI + 0x2e],0x1
004D6907  5E                        POP ESI
004D6908  5B                        POP EBX
004D6909  5D                        POP EBP
004D690A  C2 04 00                  RET 0x4
