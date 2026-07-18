FUN_0056a5f0:
0056A5F0  55                        PUSH EBP
0056A5F1  8B EC                     MOV EBP,ESP
0056A5F3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0056A5F6  53                        PUSH EBX
0056A5F7  56                        PUSH ESI
0056A5F8  57                        PUSH EDI
0056A5F9  33 DB                     XOR EBX,EBX
0056A5FB  50                        PUSH EAX
0056A5FC  8B F1                     MOV ESI,ECX
0056A5FE  53                        PUSH EBX
0056A5FF  E8 BC 8E 17 00            CALL 0x006e34c0
0056A604  8D 7E 38                  LEA EDI,[ESI + 0x38]
0056A607  8B CF                     MOV ECX,EDI
0056A609  E8 E1 B1 E9 FF            CALL 0x004057ef
0056A60E  B8 0A 00 00 00            MOV EAX,0xa
0056A613  83 C9 FF                  OR ECX,0xffffffff
0056A616  89 87 D9 10 00 00         MOV dword ptr [EDI + 0x10d9],EAX
0056A61C  89 87 DD 10 00 00         MOV dword ptr [EDI + 0x10dd],EAX
0056A622  B8 01 00 00 00            MOV EAX,0x1
0056A627  89 9F 8F 0F 00 00         MOV dword ptr [EDI + 0xf8f],EBX
0056A62D  89 9F 93 0F 00 00         MOV dword ptr [EDI + 0xf93],EBX
0056A633  89 87 E1 10 00 00         MOV dword ptr [EDI + 0x10e1],EAX
0056A639  89 9F E5 10 00 00         MOV dword ptr [EDI + 0x10e5],EBX
0056A63F  89 87 E9 10 00 00         MOV dword ptr [EDI + 0x10e9],EAX
0056A645  C7 87 ED 10 00 00 14 00 00 00  MOV dword ptr [EDI + 0x10ed],0x14
0056A64F  89 9F EF 0D 00 00         MOV dword ptr [EDI + 0xdef],EBX
0056A655  89 9F F3 0D 00 00         MOV dword ptr [EDI + 0xdf3],EBX
0056A65B  89 9F F7 0D 00 00         MOV dword ptr [EDI + 0xdf7],EBX
0056A661  C7 87 FB 0D 00 00 E8 03 00 00  MOV dword ptr [EDI + 0xdfb],0x3e8
0056A66B  89 9F FF 0D 00 00         MOV dword ptr [EDI + 0xdff],EBX
0056A671  89 8F 07 0E 00 00         MOV dword ptr [EDI + 0xe07],ECX
0056A677  89 8F 03 0E 00 00         MOV dword ptr [EDI + 0xe03],ECX
0056A67D  C7 06 A8 B0 79 00         MOV dword ptr [ESI],0x79b0a8
0056A683  89 35 28 67 80 00         MOV dword ptr [0x00806728],ESI
0056A689  89 9E 5A 11 00 00         MOV dword ptr [ESI + 0x115a],EBX
0056A68F  89 1D 3C 67 80 00         MOV dword ptr [0x0080673c],EBX
0056A695  88 86 5E 11 00 00         MOV byte ptr [ESI + 0x115e],AL
0056A69B  89 9E 5F 11 00 00         MOV dword ptr [ESI + 0x115f],EBX
0056A6A1  C6 86 63 11 00 00 02      MOV byte ptr [ESI + 0x1163],0x2
0056A6A8  89 9E 64 11 00 00         MOV dword ptr [ESI + 0x1164],EBX
0056A6AE  89 9E 68 11 00 00         MOV dword ptr [ESI + 0x1168],EBX
0056A6B4  8B CE                     MOV ECX,ESI
0056A6B6  89 9E 6C 11 00 00         MOV dword ptr [ESI + 0x116c],EBX
0056A6BC  89 9E 70 11 00 00         MOV dword ptr [ESI + 0x1170],EBX
0056A6C2  89 9E 74 11 00 00         MOV dword ptr [ESI + 0x1174],EBX
0056A6C8  89 9E 81 11 00 00         MOV dword ptr [ESI + 0x1181],EBX
0056A6CE  89 9E 85 11 00 00         MOV dword ptr [ESI + 0x1185],EBX
0056A6D4  89 9E 89 11 00 00         MOV dword ptr [ESI + 0x1189],EBX
0056A6DA  89 9E 8D 11 00 00         MOV dword ptr [ESI + 0x118d],EBX
0056A6E0  C7 86 91 11 00 00 04 00 00 00  MOV dword ptr [ESI + 0x1191],0x4
0056A6EA  88 9E 95 11 00 00         MOV byte ptr [ESI + 0x1195],BL
0056A6F0  89 9E 78 11 00 00         MOV dword ptr [ESI + 0x1178],EBX
0056A6F6  89 9E 7C 11 00 00         MOV dword ptr [ESI + 0x117c],EBX
0056A6FC  88 86 2D 11 00 00         MOV byte ptr [ESI + 0x112d],AL
0056A702  88 86 2E 11 00 00         MOV byte ptr [ESI + 0x112e],AL
0056A708  89 9E DE 4E 00 00         MOV dword ptr [ESI + 0x4ede],EBX
0056A70E  89 9E E2 4E 00 00         MOV dword ptr [ESI + 0x4ee2],EBX
0056A714  89 9E E6 4E 00 00         MOV dword ptr [ESI + 0x4ee6],EBX
0056A71A  89 9E EA 4E 00 00         MOV dword ptr [ESI + 0x4eea],EBX
0056A720  89 9E F2 4E 00 00         MOV dword ptr [ESI + 0x4ef2],EBX
0056A726  89 9E 12 7D 00 00         MOV dword ptr [ESI + 0x7d12],EBX
0056A72C  89 9E 16 7D 00 00         MOV dword ptr [ESI + 0x7d16],EBX
0056A732  89 86 F6 4E 00 00         MOV dword ptr [ESI + 0x4ef6],EAX
0056A738  89 9E FA 4E 00 00         MOV dword ptr [ESI + 0x4efa],EBX
0056A73E  66 89 9E 38 11 00 00      MOV word ptr [ESI + 0x1138],BX
0056A745  89 9E 0E 7D 00 00         MOV dword ptr [ESI + 0x7d0e],EBX
0056A74B  E8 60 AA 17 00            CALL 0x006e51b0
0056A750  89 86 34 11 00 00         MOV dword ptr [ESI + 0x1134],EAX
0056A756  B9 66 06 00 00            MOV ECX,0x666
0056A75B  33 C0                     XOR EAX,EAX
0056A75D  8D BE 96 11 00 00         LEA EDI,[ESI + 0x1196]
0056A763  89 9E F2 76 00 00         MOV dword ptr [ESI + 0x76f2],EBX
0056A769  89 9E 4E 85 00 00         MOV dword ptr [ESI + 0x854e],EBX
0056A76F  89 9E 52 85 00 00         MOV dword ptr [ESI + 0x8552],EBX
0056A775  89 9E 56 85 00 00         MOV dword ptr [ESI + 0x8556],EBX
0056A77B  F3 AB                     STOSD.REP ES:EDI
0056A77D  AA                        STOSB ES:EDI
0056A77E  B9 41 00 00 00            MOV ECX,0x41
0056A783  33 C0                     XOR EAX,EAX
0056A785  8D BE A3 4D 00 00         LEA EDI,[ESI + 0x4da3]
0056A78B  F3 AB                     STOSD.REP ES:EDI
0056A78D  89 9E A7 4E 00 00         MOV dword ptr [ESI + 0x4ea7],EBX
0056A793  89 9E AB 4E 00 00         MOV dword ptr [ESI + 0x4eab],EBX
0056A799  89 9E FE 4E 00 00         MOV dword ptr [ESI + 0x4efe],EBX
0056A79F  8B C6                     MOV EAX,ESI
0056A7A1  5F                        POP EDI
0056A7A2  5E                        POP ESI
0056A7A3  5B                        POP EBX
0056A7A4  5D                        POP EBP
0056A7A5  C2 04 00                  RET 0x4
