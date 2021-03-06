#pragma once
#include "tl/bare.h"
#include "tl/TLObject.h"
#include <optional>

class SentCode
{
private:
    int __id = 0x5e002502;

public:
    TLObject type;
    std::string phone_code_hash;
    std::optional<TLObject> next_type;
    std::optional<int> timeout;
    SentCode(TLObject type_, std::string phone_code_hash_, std::optional<TLObject> next_type_ = std::nullopt, std::optional<int> timeout_ = std::nullopt);
    static SentCode read(Reader reader);
    std::string write();
};

class Authorization
{
private:
    int __id = 0xcd050916;

public:
    std::optional<int> tmp_sessions;
    TLObject user;
    Authorization(TLObject user_, std::optional<int> tmp_sessions_ = std::nullopt);
    static Authorization read(Reader reader);
    std::string write();
};

class AuthorizationSignUpRequired
{
private:
    int __id = 0x44747e9a;

public:
    std::optional<TLObject> terms_of_service;
    AuthorizationSignUpRequired(std::optional<TLObject> terms_of_service_ = std::nullopt);
    static AuthorizationSignUpRequired read(Reader reader);
    std::string write();
};

class ExportedAuthorization
{
private:
    int __id = 0xdf969c2d;

public:
    int id;
    std::string bytes;
    ExportedAuthorization(int id_, std::string bytes_);
    static ExportedAuthorization read(Reader reader);
    std::string write();
};

class PasswordRecovery
{
private:
    int __id = 0x137948a5;

public:
    std::string email_pattern;
    PasswordRecovery(std::string email_pattern_);
    static PasswordRecovery read(Reader reader);
    std::string write();
};

class CodeTypeSms
{
private:
    int __id = 0x72a3158c;

public:
    CodeTypeSms() = default;
    static CodeTypeSms read(Reader reader);
    std::string write();
};

class CodeTypeCall
{
private:
    int __id = 0x741cd3e3;

public:
    CodeTypeCall() = default;
    static CodeTypeCall read(Reader reader);
    std::string write();
};

class CodeTypeFlashCall
{
private:
    int __id = 0x226ccefb;

public:
    CodeTypeFlashCall() = default;
    static CodeTypeFlashCall read(Reader reader);
    std::string write();
};

class SentCodeTypeApp
{
private:
    int __id = 0x3dbb5986;

public:
    int length;
    SentCodeTypeApp(int length_);
    static SentCodeTypeApp read(Reader reader);
    std::string write();
};

class SentCodeTypeSms
{
private:
    int __id = 0xc000bba2;

public:
    int length;
    SentCodeTypeSms(int length_);
    static SentCodeTypeSms read(Reader reader);
    std::string write();
};

class SentCodeTypeCall
{
private:
    int __id = 0x5353e5a7;

public:
    int length;
    SentCodeTypeCall(int length_);
    static SentCodeTypeCall read(Reader reader);
    std::string write();
};

class SentCodeTypeFlashCall
{
private:
    int __id = 0xab03c6d9;

public:
    std::string pattern;
    SentCodeTypeFlashCall(std::string pattern_);
    static SentCodeTypeFlashCall read(Reader reader);
    std::string write();
};

class LoginToken
{
private:
    int __id = 0x629f1980;

public:
    int expires;
    std::string token;
    LoginToken(int expires_, std::string token_);
    static LoginToken read(Reader reader);
    std::string write();
};

class LoginTokenMigrateTo
{
private:
    int __id = 0x68e9916;

public:
    int dc_id;
    std::string token;
    LoginTokenMigrateTo(int dc_id_, std::string token_);
    static LoginTokenMigrateTo read(Reader reader);
    std::string write();
};

class LoginTokenSuccess
{
private:
    int __id = 0x390d5c5e;

public:
    TLObject authorization;
    LoginTokenSuccess(TLObject authorization_);
    static LoginTokenSuccess read(Reader reader);
    std::string write();
};
