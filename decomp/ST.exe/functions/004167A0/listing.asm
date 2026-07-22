sub_004167A0:
004167A0  55                        PUSH EBP
004167A1  8B EC                     MOV EBP,ESP
004167A3  6A FF                     PUSH -0x1
004167A5  68 D0 01 79 00            PUSH 0x7901d0
004167AA  68 64 D9 72 00            PUSH 0x72d964
004167AF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
004167B5  50                        PUSH EAX
004167B6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
004167BD  83 EC 0C                  SUB ESP,0xc
004167C0  53                        PUSH EBX
004167C1  56                        PUSH ESI
004167C2  57                        PUSH EDI
004167C3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
004167C6  8B F1                     MOV ESI,ECX
004167C8  33 DB                     XOR EBX,EBX
004167CA  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004167CD  8D 86 97 00 00 00         LEA EAX,[ESI + 0x97]
004167D3  39 18                     CMP dword ptr [EAX],EBX
004167D5  74 23                     JZ 0x004167fa
004167D7  50                        PUSH EAX
004167D8  E8 83 48 29 00            CALL 0x006ab060
004167DD  89 9E 9B 00 00 00         MOV dword ptr [ESI + 0x9b],EBX
004167E3  89 9E D3 00 00 00         MOV dword ptr [ESI + 0xd3],EBX
004167E9  88 9E E3 00 00 00         MOV byte ptr [ESI + 0xe3],BL
004167EF  EB 09                     JMP 0x004167fa
LAB_004167fa:
004167FA  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00416801  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00416804  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0041680B  5F                        POP EDI
0041680C  5E                        POP ESI
0041680D  5B                        POP EBX
0041680E  8B E5                     MOV ESP,EBP
00416810  5D                        POP EBP
00416811  C3                        RET
