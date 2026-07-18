FUN_006c3570:
006C3570  55                        PUSH EBP
006C3571  8B EC                     MOV EBP,ESP
006C3573  56                        PUSH ESI
006C3574  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C3577  57                        PUSH EDI
006C3578  33 FF                     XOR EDI,EDI
006C357A  3B F7                     CMP ESI,EDI
006C357C  0F 84 9B 00 00 00         JZ 0x006c361d
006C3582  53                        PUSH EBX
006C3583  8D 9E 08 05 00 00         LEA EBX,[ESI + 0x508]
006C3589  53                        PUSH EBX
006C358A  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C3590  F7 46 04 00 00 00 20      TEST dword ptr [ESI + 0x4],0x20000000
006C3597  74 06                     JZ 0x006c359f
006C3599  56                        PUSH ESI
006C359A  E8 71 0B 00 00            CALL 0x006c4110
LAB_006c359f:
006C359F  F7 46 04 00 00 00 40      TEST dword ptr [ESI + 0x4],0x40000000
006C35A6  74 06                     JZ 0x006c35ae
006C35A8  56                        PUSH ESI
006C35A9  E8 52 09 00 00            CALL 0x006c3f00
LAB_006c35ae:
006C35AE  8B 86 84 00 00 00         MOV EAX,dword ptr [ESI + 0x84]
006C35B4  3B C7                     CMP EAX,EDI
006C35B6  74 0E                     JZ 0x006c35c6
006C35B8  57                        PUSH EDI
006C35B9  50                        PUSH EAX
006C35BA  FF 15 6C BB 85 00         CALL dword ptr [0x0085bb6c]
006C35C0  89 BE 84 00 00 00         MOV dword ptr [ESI + 0x84],EDI
LAB_006c35c6:
006C35C6  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
006C35C9  3B C7                     CMP EAX,EDI
006C35CB  74 09                     JZ 0x006c35d6
006C35CD  8B 08                     MOV ECX,dword ptr [EAX]
006C35CF  50                        PUSH EAX
006C35D0  FF 51 08                  CALL dword ptr [ECX + 0x8]
006C35D3  89 7E 58                  MOV dword ptr [ESI + 0x58],EDI
LAB_006c35d6:
006C35D6  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
006C35D9  3B C7                     CMP EAX,EDI
006C35DB  74 09                     JZ 0x006c35e6
006C35DD  8B 10                     MOV EDX,dword ptr [EAX]
006C35DF  50                        PUSH EAX
006C35E0  FF 52 08                  CALL dword ptr [EDX + 0x8]
006C35E3  89 7E 54                  MOV dword ptr [ESI + 0x54],EDI
LAB_006c35e6:
006C35E6  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006C35E9  3B C7                     CMP EAX,EDI
006C35EB  74 06                     JZ 0x006c35f3
006C35ED  50                        PUSH EAX
006C35EE  E8 5D 19 01 00            CALL 0x006d4f50
LAB_006c35f3:
006C35F3  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
006C35F6  89 7E 40                  MOV dword ptr [ESI + 0x40],EDI
006C35F9  3B C7                     CMP EAX,EDI
006C35FB  74 06                     JZ 0x006c3603
006C35FD  50                        PUSH EAX
006C35FE  E8 4D 19 01 00            CALL 0x006d4f50
LAB_006c3603:
006C3603  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006C3606  53                        PUSH EBX
006C3607  81 E1 FE FF FF 7F         AND ECX,0x7ffffffe
006C360D  89 7E 44                  MOV dword ptr [ESI + 0x44],EDI
006C3610  89 7E 74                  MOV dword ptr [ESI + 0x74],EDI
006C3613  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
006C3616  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C361C  5B                        POP EBX
LAB_006c361d:
006C361D  5F                        POP EDI
006C361E  5E                        POP ESI
006C361F  5D                        POP EBP
006C3620  C2 04 00                  RET 0x4
