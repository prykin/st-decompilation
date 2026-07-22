STBHEShellC::sub_005F53A0:
005F53A0  55                        PUSH EBP
005F53A1  8B EC                     MOV EBP,ESP
005F53A3  51                        PUSH ECX
005F53A4  53                        PUSH EBX
005F53A5  8B D9                     MOV EBX,ECX
005F53A7  8B 83 69 01 00 00         MOV EAX,dword ptr [EBX + 0x169]
005F53AD  85 C0                     TEST EAX,EAX
005F53AF  74 62                     JZ 0x005f5413
005F53B1  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005F53B4  57                        PUSH EDI
005F53B5  33 FF                     XOR EDI,EDI
005F53B7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005F53BA  85 C9                     TEST ECX,ECX
005F53BC  7E 3E                     JLE 0x005f53fc
005F53BE  56                        PUSH ESI
LAB_005f53bf:
005F53BF  8B 83 69 01 00 00         MOV EAX,dword ptr [EBX + 0x169]
005F53C5  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
005F53C8  73 2C                     JNC 0x005f53f6
005F53CA  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005F53CD  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
005F53D0  0F AF F7                  IMUL ESI,EDI
005F53D3  03 F2                     ADD ESI,EDX
005F53D5  85 F6                     TEST ESI,ESI
005F53D7  74 1D                     JZ 0x005f53f6
005F53D9  8B 46 1F                  MOV EAX,dword ptr [ESI + 0x1f]
005F53DC  85 C0                     TEST EAX,EAX
005F53DE  7C 16                     JL 0x005f53f6
005F53E0  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F53E6  50                        PUSH EAX
005F53E7  E8 B4 37 0F 00            CALL 0x006e8ba0
005F53EC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005F53EF  C7 46 1F FF FF FF FF      MOV dword ptr [ESI + 0x1f],0xffffffff
LAB_005f53f6:
005F53F6  47                        INC EDI
005F53F7  3B F9                     CMP EDI,ECX
005F53F9  7C C4                     JL 0x005f53bf
005F53FB  5E                        POP ESI
LAB_005f53fc:
005F53FC  8B 83 69 01 00 00         MOV EAX,dword ptr [EBX + 0x169]
005F5402  50                        PUSH EAX
005F5403  E8 08 8D 0B 00            CALL 0x006ae110
005F5408  C7 83 69 01 00 00 00 00 00 00  MOV dword ptr [EBX + 0x169],0x0
005F5412  5F                        POP EDI
LAB_005f5413:
005F5413  5B                        POP EBX
005F5414  8B E5                     MOV ESP,EBP
005F5416  5D                        POP EBP
005F5417  C3                        RET
