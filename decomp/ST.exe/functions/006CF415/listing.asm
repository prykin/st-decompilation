FUN_006cf415:
006CF415  8B 65 E8                  MOV ESP,dword ptr [EBP + -0x18]
006CF418  C7 45 DC FB FF FF FF      MOV dword ptr [EBP + -0x24],0xfffffffb
006CF41F  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006CF426  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
LAB_006cf429:
006CF429  80 7D 34 02               CMP byte ptr [EBP + 0x34],0x2
006CF42D  0F 85 DB 04 00 00         JNZ 0x006cf90e
006CF433  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CF436  8B 02                     MOV EAX,dword ptr [EDX]
006CF438  8B 40 44                  MOV EAX,dword ptr [EAX + 0x44]
006CF43B  8B 08                     MOV ECX,dword ptr [EAX]
006CF43D  6A 00                     PUSH 0x0
006CF43F  50                        PUSH EAX
006CF440  FF 91 80 00 00 00         CALL dword ptr [ECX + 0x80]
006CF446  E9 C6 04 00 00            JMP 0x006cf911
