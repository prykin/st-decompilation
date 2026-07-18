FUN_005a0af0:
005A0AF0  56                        PUSH ESI
005A0AF1  8B F1                     MOV ESI,ECX
005A0AF3  57                        PUSH EDI
005A0AF4  33 FF                     XOR EDI,EDI
005A0AF6  8B 86 C4 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac4]
005A0AFC  3B C7                     CMP EAX,EDI
005A0AFE  74 09                     JZ 0x005a0b09
005A0B00  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0B03  50                        PUSH EAX
005A0B04  E8 A7 4B 14 00            CALL 0x006e56b0
LAB_005a0b09:
005A0B09  8B 86 C8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac8]
005A0B0F  89 BE C4 1A 00 00         MOV dword ptr [ESI + 0x1ac4],EDI
005A0B15  3B C7                     CMP EAX,EDI
005A0B17  74 09                     JZ 0x005a0b22
005A0B19  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0B1C  50                        PUSH EAX
005A0B1D  E8 8E 4B 14 00            CALL 0x006e56b0
LAB_005a0b22:
005A0B22  8B 86 20 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b20]
005A0B28  89 BE C8 1A 00 00         MOV dword ptr [ESI + 0x1ac8],EDI
005A0B2E  3B C7                     CMP EAX,EDI
005A0B30  74 09                     JZ 0x005a0b3b
005A0B32  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0B35  50                        PUSH EAX
005A0B36  E8 75 4B 14 00            CALL 0x006e56b0
LAB_005a0b3b:
005A0B3B  8B 86 B6 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eb6]
005A0B41  89 BE 20 1B 00 00         MOV dword ptr [ESI + 0x1b20],EDI
005A0B47  3B C7                     CMP EAX,EDI
005A0B49  74 09                     JZ 0x005a0b54
005A0B4B  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0B4E  50                        PUSH EAX
005A0B4F  E8 5C 4B 14 00            CALL 0x006e56b0
LAB_005a0b54:
005A0B54  8B 86 BA 1E 00 00         MOV EAX,dword ptr [ESI + 0x1eba]
005A0B5A  89 BE B6 1E 00 00         MOV dword ptr [ESI + 0x1eb6],EDI
005A0B60  3B C7                     CMP EAX,EDI
005A0B62  74 09                     JZ 0x005a0b6d
005A0B64  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0B67  50                        PUSH EAX
005A0B68  E8 43 4B 14 00            CALL 0x006e56b0
LAB_005a0b6d:
005A0B6D  8B 86 24 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b24]
005A0B73  89 BE BA 1E 00 00         MOV dword ptr [ESI + 0x1eba],EDI
005A0B79  3B C7                     CMP EAX,EDI
005A0B7B  74 09                     JZ 0x005a0b86
005A0B7D  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005A0B80  50                        PUSH EAX
005A0B81  E8 2A 4B 14 00            CALL 0x006e56b0
LAB_005a0b86:
005A0B86  8B 86 E8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae8]
005A0B8C  89 BE 24 1B 00 00         MOV dword ptr [ESI + 0x1b24],EDI
005A0B92  3B C7                     CMP EAX,EDI
005A0B94  74 06                     JZ 0x005a0b9c
005A0B96  50                        PUSH EAX
005A0B97  E8 D4 49 11 00            CALL 0x006b5570
LAB_005a0b9c:
005A0B9C  8B 86 EC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1aec]
005A0BA2  89 BE E8 1A 00 00         MOV dword ptr [ESI + 0x1ae8],EDI
005A0BA8  3B C7                     CMP EAX,EDI
005A0BAA  74 06                     JZ 0x005a0bb2
005A0BAC  50                        PUSH EAX
005A0BAD  E8 BE 49 11 00            CALL 0x006b5570
LAB_005a0bb2:
005A0BB2  8B 86 04 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b04]
005A0BB8  89 BE EC 1A 00 00         MOV dword ptr [ESI + 0x1aec],EDI
005A0BBE  3B C7                     CMP EAX,EDI
005A0BC0  74 06                     JZ 0x005a0bc8
005A0BC2  50                        PUSH EAX
005A0BC3  E8 A8 49 11 00            CALL 0x006b5570
LAB_005a0bc8:
005A0BC8  8B 86 BE 1E 00 00         MOV EAX,dword ptr [ESI + 0x1ebe]
005A0BCE  89 BE 04 1B 00 00         MOV dword ptr [ESI + 0x1b04],EDI
005A0BD4  3B C7                     CMP EAX,EDI
005A0BD6  74 06                     JZ 0x005a0bde
005A0BD8  50                        PUSH EAX
005A0BD9  E8 32 D5 10 00            CALL 0x006ae110
LAB_005a0bde:
005A0BDE  8B 8E 8E 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e8e]
005A0BE4  8D 86 8E 1E 00 00         LEA EAX,[ESI + 0x1e8e]
005A0BEA  3B CF                     CMP ECX,EDI
005A0BEC  89 BE BE 1E 00 00         MOV dword ptr [ESI + 0x1ebe],EDI
005A0BF2  74 06                     JZ 0x005a0bfa
005A0BF4  50                        PUSH EAX
005A0BF5  E8 66 A4 10 00            CALL 0x006ab060
LAB_005a0bfa:
005A0BFA  8B 8E 92 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e92]
005A0C00  8D 86 92 1E 00 00         LEA EAX,[ESI + 0x1e92]
005A0C06  3B CF                     CMP ECX,EDI
005A0C08  74 06                     JZ 0x005a0c10
005A0C0A  50                        PUSH EAX
005A0C0B  E8 50 A4 10 00            CALL 0x006ab060
LAB_005a0c10:
005A0C10  8B 8E 9A 1E 00 00         MOV ECX,dword ptr [ESI + 0x1e9a]
005A0C16  8D 86 9A 1E 00 00         LEA EAX,[ESI + 0x1e9a]
005A0C1C  3B CF                     CMP ECX,EDI
005A0C1E  5F                        POP EDI
005A0C1F  5E                        POP ESI
005A0C20  74 06                     JZ 0x005a0c28
005A0C22  50                        PUSH EAX
005A0C23  E8 38 A4 10 00            CALL 0x006ab060
LAB_005a0c28:
005A0C28  C3                        RET
